/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_send_book;
    QTableWidget *books_table;
    QPushButton *btn_save;
    QPushButton *btn_load;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModality::ApplicationModal);
        MainWindow->resize(945, 580);
        MainWindow->setMaximumSize(QSize(945, 580));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btn_send_book = new QPushButton(centralwidget);
        btn_send_book->setObjectName("btn_send_book");
        btn_send_book->setGeometry(QRect(830, 500, 90, 29));
        books_table = new QTableWidget(centralwidget);
        if (books_table->columnCount() < 3)
            books_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        books_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        books_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        books_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        books_table->setObjectName("books_table");
        books_table->setGeometry(QRect(20, 10, 911, 481));
        books_table->setAcceptDrops(false);
        books_table->setLineWidth(1);
        books_table->horizontalHeader()->setDefaultSectionSize(300);
        btn_save = new QPushButton(centralwidget);
        btn_save->setObjectName("btn_save");
        btn_save->setGeometry(QRect(20, 495, 71, 21));
        btn_load = new QPushButton(centralwidget);
        btn_load->setObjectName("btn_load");
        btn_load->setGeometry(QRect(100, 495, 71, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 945, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Book Manager", nullptr));
        btn_send_book->setText(QCoreApplication::translate("MainWindow", "Enviar livro", nullptr));
        QTableWidgetItem *___qtablewidgetitem = books_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Nome do livro:", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = books_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Local:", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = books_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Tamanho:", nullptr));
        btn_save->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        btn_load->setText(QCoreApplication::translate("MainWindow", "Carregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
