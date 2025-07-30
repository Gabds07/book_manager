#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QSettings>
#include <windows.h>
#include <shellapi.h>

MainWindow::MainWindow(QWidget *parent):QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_btn_send_book_clicked() {
    QStringList books_files = QFileDialog::getOpenFileNames(this, "Abrir arquivo", "", "Arquivos para kindle (*.mobi; *.DOC; *.HTML; *.TXT; *.JPEG; *.PDF; *.EPUB);; "
    "Todos (*.*)");
    if(books_files.isEmpty()) return;

    for (const QString &filePath: books_files) {
        QFileInfo info(filePath);

        int row = ui->books_table->rowCount();
        ui->books_table->insertRow(row);

        ui->books_table->setItem(row, 0, new QTableWidgetItem(info.fileName()));
        ui->books_table->setItem(row, 1, new QTableWidgetItem(info.absolutePath()));
        ui->books_table->setItem(row, 2, new QTableWidgetItem(QString::number(info.size() / 1000) + " KB"));
    }
}


void MainWindow::on_btn_save_clicked() {
    QSettings books("Book manager");

    books.beginGroup("table");

    int rows = ui->books_table->rowCount();
    int cols = ui->books_table->columnCount();
    books.setValue("rows", rows);
    books.setValue("cols", cols);

    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            QTableWidgetItem *item = ui->books_table->item(row, col);
            QString key = QString("cell_%1_%2").arg(row).arg(col);
            books.setValue(key, item ? item->text() : "");
        }
    }

    books.endGroup();
}


void MainWindow::on_btn_load_clicked() {
    QSettings books("Book manager");
    books.beginGroup("table");

    int rows = books.value("rows", 0).toInt();
    int cols = books.value("cols", 0).toInt();
    ui->books_table->setRowCount(rows);
    ui->books_table->setColumnCount(cols);

    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; ++col) {
            QString key = QString("cell_%1_%2").arg(row).arg(col);
            QString val = books.value(key, "").toString();
            ui->books_table->setItem(row, col, new QTableWidgetItem(val));
        }
    }

    books.endGroup();
}


void MainWindow::on_books_table_cellClicked(int row) {
    QTableWidgetItem *item = ui->books_table->item(row, 1);
    std::wstring directory_path = item->text().QString::toStdWString();
    ShellExecuteW(NULL, L"open", directory_path.c_str(), NULL, NULL, SW_SHOWNORMAL);
}
