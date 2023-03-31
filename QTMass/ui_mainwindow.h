/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_20;
    QAction *action_21;
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_n;
    QPushButton *pushButton_create;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(328, 402);
        MainWindow->setMinimumSize(QSize(328, 402));
        MainWindow->setMaximumSize(QSize(328, 402));
        action_20 = new QAction(MainWindow);
        action_20->setObjectName(QString::fromUtf8("action_20"));
        action_21 = new QAction(MainWindow);
        action_21->setObjectName(QString::fromUtf8("action_21"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 10, 302, 332));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(146, 22));

        horizontalLayout->addWidget(label);

        lineEdit_n = new QLineEdit(widget);
        lineEdit_n->setObjectName(QString::fromUtf8("lineEdit_n"));
        lineEdit_n->setMaximumSize(QSize(147, 22));

        horizontalLayout->addWidget(lineEdit_n);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_create = new QPushButton(widget);
        pushButton_create->setObjectName(QString::fromUtf8("pushButton_create"));
        pushButton_create->setMaximumSize(QSize(300, 28));

        verticalLayout->addWidget(pushButton_create);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(300, 267));

        verticalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 328, 25));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menu);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(menu_2->menuAction());
        menu_2->addAction(action_21);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\274\320\260\321\201\321\201\320\270\320\262\320\260", nullptr));
        action_20->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\275\321\216\320\263\320\270\320\275\320\260 \320\222\320\260\321\200\320\262\320\260\321\200\320\260 \320\230\320\222\320\242-20", nullptr));
        action_21->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\275\321\216\320\263\320\270\320\275\320\260 \320\222\320\260\321\200\320\262\320\260\321\200\320\260 \320\230\320\222\320\242-20", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\200\320\260\320\267\320\274\320\265\321\200 \320\274\320\260\321\201\321\201\320\270\320\262\320\260", nullptr));
        lineEdit_n->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_create->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\274\320\260\321\201\321\201\320\270\320\262", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\260\320\262\320\276\321\200\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
