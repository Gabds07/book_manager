#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qtablewidget.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_send_book_clicked();

    void on_btn_save_clicked();

    void on_btn_load_clicked();

    void on_books_table_cellDoubleClicked(int row);

    void on_btn_delete_book_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
