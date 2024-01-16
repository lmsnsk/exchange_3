/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *inputField;
    QGridLayout *gridLayoutBtn;
    QPushButton *btn_x;
    QPushButton *back_sp;
    QPushButton *minus;
    QPushButton *btn_2;
    QPushButton *plus;
    QPushButton *tan;
    QPushButton *cos;
    QPushButton *exp;
    QPushButton *atan;
    QPushButton *sin;
    QPushButton *result;
    QPushButton *btn_9;
    QPushButton *btn_7;
    QPushButton *btn_3;
    QPushButton *log;
    QPushButton *mod;
    QPushButton *devider;
    QPushButton *btn_8;
    QPushButton *btn_5;
    QPushButton *asin;
    QPushButton *btn_6;
    QPushButton *c_brack;
    QPushButton *o_brack;
    QPushButton *sqrt;
    QPushButton *btn_0;
    QPushButton *ln;
    QPushButton *btn_1;
    QPushButton *btn_4;
    QPushButton *acos;
    QPushButton *mul;
    QPushButton *clear;
    QPushButton *sub;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(386, 590);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMouseTracking(false);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 0;\n"
"	background-color: white;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(245, 245, 245);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color:rgb(219, 229, 243);\n"
"}"));
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setMinimumSize(QSize(350, 0));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        inputField = new QLineEdit(centralwidget);
        inputField->setObjectName(QString::fromUtf8("inputField"));
        inputField->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setPointSize(14);
        inputField->setFont(font);
        inputField->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(inputField);

        gridLayoutBtn = new QGridLayout();
        gridLayoutBtn->setSpacing(5);
        gridLayoutBtn->setObjectName(QString::fromUtf8("gridLayoutBtn"));
        gridLayoutBtn->setContentsMargins(5, 5, 5, 5);
        btn_x = new QPushButton(centralwidget);
        btn_x->setObjectName(QString::fromUtf8("btn_x"));
        sizePolicy1.setHeightForWidth(btn_x->sizePolicy().hasHeightForWidth());
        btn_x->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        btn_x->setFont(font1);
        btn_x->setFocusPolicy(Qt::NoFocus);
        btn_x->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_x, 7, 2, 1, 1);

        back_sp = new QPushButton(centralwidget);
        back_sp->setObjectName(QString::fromUtf8("back_sp"));
        sizePolicy1.setHeightForWidth(back_sp->sizePolicy().hasHeightForWidth());
        back_sp->setSizePolicy(sizePolicy1);
        back_sp->setFont(font1);
        back_sp->setFocusPolicy(Qt::NoFocus);
        back_sp->setAcceptDrops(true);

        gridLayoutBtn->addWidget(back_sp, 1, 3, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        sizePolicy1.setHeightForWidth(minus->sizePolicy().hasHeightForWidth());
        minus->setSizePolicy(sizePolicy1);
        minus->setFont(font1);
        minus->setFocusPolicy(Qt::NoFocus);
        minus->setAcceptDrops(true);

        gridLayoutBtn->addWidget(minus, 5, 3, 1, 1);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        sizePolicy1.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy1);
        btn_2->setFont(font1);
        btn_2->setFocusPolicy(Qt::NoFocus);
        btn_2->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_2, 6, 1, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        sizePolicy1.setHeightForWidth(plus->sizePolicy().hasHeightForWidth());
        plus->setSizePolicy(sizePolicy1);
        plus->setFont(font1);
        plus->setFocusPolicy(Qt::NoFocus);
        plus->setAcceptDrops(true);

        gridLayoutBtn->addWidget(plus, 4, 3, 1, 1);

        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        sizePolicy1.setHeightForWidth(tan->sizePolicy().hasHeightForWidth());
        tan->setSizePolicy(sizePolicy1);
        tan->setFont(font1);
        tan->setFocusPolicy(Qt::NoFocus);
        tan->setAcceptDrops(true);

        gridLayoutBtn->addWidget(tan, 2, 2, 1, 1);

        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        sizePolicy1.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy1);
        cos->setFont(font1);
        cos->setFocusPolicy(Qt::NoFocus);
        cos->setAcceptDrops(true);

        gridLayoutBtn->addWidget(cos, 2, 1, 1, 1);

        exp = new QPushButton(centralwidget);
        exp->setObjectName(QString::fromUtf8("exp"));
        sizePolicy1.setHeightForWidth(exp->sizePolicy().hasHeightForWidth());
        exp->setSizePolicy(sizePolicy1);
        exp->setFont(font1);
        exp->setFocusPolicy(Qt::NoFocus);
        exp->setAcceptDrops(true);

        gridLayoutBtn->addWidget(exp, 3, 1, 1, 1);

        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        sizePolicy1.setHeightForWidth(atan->sizePolicy().hasHeightForWidth());
        atan->setSizePolicy(sizePolicy1);
        atan->setFont(font1);
        atan->setFocusPolicy(Qt::NoFocus);
        atan->setAcceptDrops(true);

        gridLayoutBtn->addWidget(atan, 1, 2, 1, 1);

        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sizePolicy1.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy1);
        sin->setFont(font1);
        sin->setFocusPolicy(Qt::NoFocus);
        sin->setAcceptDrops(true);

        gridLayoutBtn->addWidget(sin, 2, 0, 1, 1);

        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        sizePolicy1.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy1);
        result->setFont(font1);
        result->setFocusPolicy(Qt::NoFocus);
        result->setAcceptDrops(true);
        result->setStyleSheet(QString::fromUtf8(""));

        gridLayoutBtn->addWidget(result, 6, 5, 2, 1);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        sizePolicy1.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy1);
        btn_9->setFont(font1);
        btn_9->setFocusPolicy(Qt::NoFocus);
        btn_9->setAcceptDrops(true);
        btn_9->setStyleSheet(QString::fromUtf8(""));

        gridLayoutBtn->addWidget(btn_9, 4, 2, 1, 1);

        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        sizePolicy1.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy1);
        btn_7->setFont(font1);
        btn_7->setFocusPolicy(Qt::NoFocus);
        btn_7->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_7, 4, 0, 1, 1);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        sizePolicy1.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy1);
        btn_3->setFont(font1);
        btn_3->setFocusPolicy(Qt::NoFocus);
        btn_3->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_3, 6, 2, 1, 1);

        log = new QPushButton(centralwidget);
        log->setObjectName(QString::fromUtf8("log"));
        sizePolicy1.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy1);
        log->setFont(font1);
        log->setFocusPolicy(Qt::NoFocus);
        log->setAcceptDrops(true);

        gridLayoutBtn->addWidget(log, 2, 3, 1, 1);

        mod = new QPushButton(centralwidget);
        mod->setObjectName(QString::fromUtf8("mod"));
        sizePolicy1.setHeightForWidth(mod->sizePolicy().hasHeightForWidth());
        mod->setSizePolicy(sizePolicy1);
        mod->setFont(font1);
        mod->setFocusPolicy(Qt::NoFocus);
        mod->setAcceptDrops(true);

        gridLayoutBtn->addWidget(mod, 3, 2, 1, 1);

        devider = new QPushButton(centralwidget);
        devider->setObjectName(QString::fromUtf8("devider"));
        sizePolicy1.setHeightForWidth(devider->sizePolicy().hasHeightForWidth());
        devider->setSizePolicy(sizePolicy1);
        devider->setFont(font1);
        devider->setFocusPolicy(Qt::NoFocus);
        devider->setAcceptDrops(true);

        gridLayoutBtn->addWidget(devider, 7, 0, 1, 1);

        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        sizePolicy1.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy1);
        btn_8->setFont(font1);
        btn_8->setFocusPolicy(Qt::NoFocus);
        btn_8->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_8, 4, 1, 1, 1);

        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        sizePolicy1.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy1);
        btn_5->setFont(font1);
        btn_5->setFocusPolicy(Qt::NoFocus);
        btn_5->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_5, 5, 1, 1, 1);

        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        sizePolicy1.setHeightForWidth(asin->sizePolicy().hasHeightForWidth());
        asin->setSizePolicy(sizePolicy1);
        asin->setFont(font1);
        asin->setFocusPolicy(Qt::NoFocus);
        asin->setAcceptDrops(true);

        gridLayoutBtn->addWidget(asin, 1, 0, 1, 1);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        sizePolicy1.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy1);
        btn_6->setFont(font1);
        btn_6->setFocusPolicy(Qt::NoFocus);
        btn_6->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_6, 5, 2, 1, 1);

        c_brack = new QPushButton(centralwidget);
        c_brack->setObjectName(QString::fromUtf8("c_brack"));
        sizePolicy1.setHeightForWidth(c_brack->sizePolicy().hasHeightForWidth());
        c_brack->setSizePolicy(sizePolicy1);
        c_brack->setFont(font1);
        c_brack->setFocusPolicy(Qt::NoFocus);
        c_brack->setAcceptDrops(true);

        gridLayoutBtn->addWidget(c_brack, 5, 5, 1, 1);

        o_brack = new QPushButton(centralwidget);
        o_brack->setObjectName(QString::fromUtf8("o_brack"));
        sizePolicy1.setHeightForWidth(o_brack->sizePolicy().hasHeightForWidth());
        o_brack->setSizePolicy(sizePolicy1);
        o_brack->setFont(font1);
        o_brack->setFocusPolicy(Qt::NoFocus);
        o_brack->setAcceptDrops(true);

        gridLayoutBtn->addWidget(o_brack, 4, 5, 1, 1);

        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sizePolicy1.setHeightForWidth(sqrt->sizePolicy().hasHeightForWidth());
        sqrt->setSizePolicy(sizePolicy1);
        sqrt->setFont(font1);
        sqrt->setFocusPolicy(Qt::NoFocus);
        sqrt->setAcceptDrops(true);

        gridLayoutBtn->addWidget(sqrt, 3, 0, 1, 1);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        sizePolicy1.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy1);
        btn_0->setFont(font1);
        btn_0->setFocusPolicy(Qt::NoFocus);
        btn_0->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_0, 7, 1, 1, 1);

        ln = new QPushButton(centralwidget);
        ln->setObjectName(QString::fromUtf8("ln"));
        sizePolicy1.setHeightForWidth(ln->sizePolicy().hasHeightForWidth());
        ln->setSizePolicy(sizePolicy1);
        ln->setFont(font1);
        ln->setFocusPolicy(Qt::NoFocus);
        ln->setAcceptDrops(true);

        gridLayoutBtn->addWidget(ln, 3, 3, 1, 1);

        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        sizePolicy1.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy1);
        btn_1->setFont(font1);
        btn_1->setFocusPolicy(Qt::NoFocus);
        btn_1->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_1, 6, 0, 1, 1);

        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        sizePolicy1.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy1);
        btn_4->setFont(font1);
        btn_4->setFocusPolicy(Qt::NoFocus);
        btn_4->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_4, 5, 0, 1, 1);

        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        sizePolicy1.setHeightForWidth(acos->sizePolicy().hasHeightForWidth());
        acos->setSizePolicy(sizePolicy1);
        acos->setFont(font1);
        acos->setFocusPolicy(Qt::NoFocus);
        acos->setAcceptDrops(true);

        gridLayoutBtn->addWidget(acos, 1, 1, 1, 1);

        mul = new QPushButton(centralwidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        sizePolicy1.setHeightForWidth(mul->sizePolicy().hasHeightForWidth());
        mul->setSizePolicy(sizePolicy1);
        mul->setFont(font1);
        mul->setFocusPolicy(Qt::NoFocus);
        mul->setAcceptDrops(true);

        gridLayoutBtn->addWidget(mul, 6, 3, 1, 1);

        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);
        clear->setFont(font1);
        clear->setFocusPolicy(Qt::NoFocus);
        clear->setAcceptDrops(true);

        gridLayoutBtn->addWidget(clear, 1, 5, 1, 1);

        sub = new QPushButton(centralwidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sizePolicy1.setHeightForWidth(sub->sizePolicy().hasHeightForWidth());
        sub->setSizePolicy(sizePolicy1);
        sub->setFont(font1);
        sub->setFocusPolicy(Qt::NoFocus);
        sub->setAcceptDrops(true);

        gridLayoutBtn->addWidget(sub, 7, 3, 1, 1);


        verticalLayout->addLayout(gridLayoutBtn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setEnabled(true);
        menubar->setGeometry(QRect(0, 0, 386, 20));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Smart Calculator", nullptr));
        btn_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        back_sp->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        tan->setText(QCoreApplication::translate("MainWindow", "TAN", nullptr));
        cos->setText(QCoreApplication::translate("MainWindow", "COS", nullptr));
        exp->setText(QCoreApplication::translate("MainWindow", "EXP", nullptr));
        atan->setText(QCoreApplication::translate("MainWindow", "ATAN", nullptr));
        sin->setText(QCoreApplication::translate("MainWindow", "SIN", nullptr));
#if QT_CONFIG(whatsthis)
        result->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        log->setText(QCoreApplication::translate("MainWindow", "LOG", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "MOD", nullptr));
        devider->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        asin->setText(QCoreApplication::translate("MainWindow", "ASIN", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        c_brack->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        o_brack->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "SQRT", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ln->setText(QCoreApplication::translate("MainWindow", "LN", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        acos->setText(QCoreApplication::translate("MainWindow", "ACOS", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
