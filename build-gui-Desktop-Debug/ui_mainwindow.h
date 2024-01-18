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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
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
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *input_x;
    QLabel *label_2;
    QLineEdit *memory_field;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *result_field;
    QGridLayout *gridLayoutBtn;
    QPushButton *back_sp;
    QPushButton *minus;
    QPushButton *btn_2;
    QPushButton *plus;
    QPushButton *tan;
    QPushButton *cos;
    QPushButton *exp;
    QPushButton *atan;
    QPushButton *sin;
    QPushButton *btn_9;
    QPushButton *btn_7;
    QPushButton *btn_3;
    QPushButton *log;
    QPushButton *mod;
    QPushButton *btn_8;
    QPushButton *btn_5;
    QPushButton *asin;
    QPushButton *btn_6;
    QPushButton *sqrt;
    QPushButton *btn_0;
    QPushButton *ln;
    QPushButton *btn_1;
    QPushButton *btn_4;
    QPushButton *acos;
    QPushButton *mul;
    QPushButton *clear;
    QPushButton *sub;
    QPushButton *memory;
    QPushButton *memory_r;
    QPushButton *result;
    QPushButton *c_brack;
    QPushButton *o_brack;
    QPushButton *memory_c;
    QPushButton *devider;
    QPushButton *btn_x;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(386, 623);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow {\n"
"	border-radius:0;\n"
"}\n"
"\n"
"QPushButton {\n"
"	border-radius:0;\n"
"	background-color:white;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color:rgb(245, 245, 245);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color:rgb(219, 229, 243);\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border-radius:0; \n"
"	border:1px solid grey; \n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"	background-color:transparent; 	\n"
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
        inputField->setMinimumSize(QSize(0, 50));
        QFont font;
        font.setPointSize(12);
        inputField->setFont(font);

        verticalLayout->addWidget(inputField);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 15));

        verticalLayout_2->addWidget(label_3);

        input_x = new QLineEdit(centralwidget);
        input_x->setObjectName(QString::fromUtf8("input_x"));
        input_x->setMinimumSize(QSize(110, 20));
        input_x->setMaximumSize(QSize(120, 30));
        input_x->setFont(font);

        verticalLayout_2->addWidget(input_x);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 15));

        verticalLayout_2->addWidget(label_2);

        memory_field = new QLineEdit(centralwidget);
        memory_field->setObjectName(QString::fromUtf8("memory_field"));
        memory_field->setMinimumSize(QSize(110, 20));
        memory_field->setMaximumSize(QSize(120, 30));
        memory_field->setFont(font);
        memory_field->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(memory_field);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(200, 15));
        label->setMaximumSize(QSize(16777215, 15));

        verticalLayout_3->addWidget(label);

        result_field = new QLineEdit(centralwidget);
        result_field->setObjectName(QString::fromUtf8("result_field"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(result_field->sizePolicy().hasHeightForWidth());
        result_field->setSizePolicy(sizePolicy2);
        result_field->setMinimumSize(QSize(200, 40));
        result_field->setMaximumSize(QSize(16777215, 70));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        result_field->setFont(font1);
        result_field->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(result_field);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        gridLayoutBtn = new QGridLayout();
        gridLayoutBtn->setSpacing(5);
        gridLayoutBtn->setObjectName(QString::fromUtf8("gridLayoutBtn"));
        gridLayoutBtn->setContentsMargins(5, 5, 5, 5);
        back_sp = new QPushButton(centralwidget);
        back_sp->setObjectName(QString::fromUtf8("back_sp"));
        sizePolicy1.setHeightForWidth(back_sp->sizePolicy().hasHeightForWidth());
        back_sp->setSizePolicy(sizePolicy1);
        back_sp->setMinimumSize(QSize(0, 55));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        font2.setStrikeOut(false);
        back_sp->setFont(font2);
        back_sp->setFocusPolicy(Qt::NoFocus);
        back_sp->setAcceptDrops(true);

        gridLayoutBtn->addWidget(back_sp, 1, 3, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        sizePolicy1.setHeightForWidth(minus->sizePolicy().hasHeightForWidth());
        minus->setSizePolicy(sizePolicy1);
        minus->setMinimumSize(QSize(0, 55));
        minus->setFont(font2);
        minus->setFocusPolicy(Qt::NoFocus);
        minus->setAcceptDrops(true);

        gridLayoutBtn->addWidget(minus, 5, 3, 1, 1);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        sizePolicy1.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy1);
        btn_2->setMinimumSize(QSize(0, 55));
        QFont font3;
        font3.setPointSize(16);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        font3.setStrikeOut(false);
        btn_2->setFont(font3);
        btn_2->setFocusPolicy(Qt::NoFocus);
        btn_2->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_2, 6, 1, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        sizePolicy1.setHeightForWidth(plus->sizePolicy().hasHeightForWidth());
        plus->setSizePolicy(sizePolicy1);
        plus->setMinimumSize(QSize(0, 55));
        plus->setFont(font2);
        plus->setFocusPolicy(Qt::NoFocus);
        plus->setAcceptDrops(true);

        gridLayoutBtn->addWidget(plus, 4, 3, 1, 1);

        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        sizePolicy1.setHeightForWidth(tan->sizePolicy().hasHeightForWidth());
        tan->setSizePolicy(sizePolicy1);
        tan->setMinimumSize(QSize(0, 55));
        tan->setFont(font2);
        tan->setFocusPolicy(Qt::NoFocus);
        tan->setAcceptDrops(true);

        gridLayoutBtn->addWidget(tan, 2, 2, 1, 1);

        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        sizePolicy1.setHeightForWidth(cos->sizePolicy().hasHeightForWidth());
        cos->setSizePolicy(sizePolicy1);
        cos->setMinimumSize(QSize(0, 55));
        cos->setFont(font2);
        cos->setFocusPolicy(Qt::NoFocus);
        cos->setAcceptDrops(true);

        gridLayoutBtn->addWidget(cos, 2, 1, 1, 1);

        exp = new QPushButton(centralwidget);
        exp->setObjectName(QString::fromUtf8("exp"));
        sizePolicy1.setHeightForWidth(exp->sizePolicy().hasHeightForWidth());
        exp->setSizePolicy(sizePolicy1);
        exp->setMinimumSize(QSize(0, 55));
        exp->setFont(font2);
        exp->setFocusPolicy(Qt::NoFocus);
        exp->setAcceptDrops(true);

        gridLayoutBtn->addWidget(exp, 3, 1, 1, 1);

        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        sizePolicy1.setHeightForWidth(atan->sizePolicy().hasHeightForWidth());
        atan->setSizePolicy(sizePolicy1);
        atan->setMinimumSize(QSize(0, 55));
        atan->setFont(font2);
        atan->setFocusPolicy(Qt::NoFocus);
        atan->setAcceptDrops(true);

        gridLayoutBtn->addWidget(atan, 1, 2, 1, 1);

        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sizePolicy1.setHeightForWidth(sin->sizePolicy().hasHeightForWidth());
        sin->setSizePolicy(sizePolicy1);
        sin->setMinimumSize(QSize(0, 55));
        sin->setFont(font2);
        sin->setFocusPolicy(Qt::NoFocus);
        sin->setAcceptDrops(true);

        gridLayoutBtn->addWidget(sin, 2, 0, 1, 1);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        sizePolicy1.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy1);
        btn_9->setMinimumSize(QSize(0, 55));
        btn_9->setFont(font3);
        btn_9->setFocusPolicy(Qt::NoFocus);
        btn_9->setAcceptDrops(true);
        btn_9->setStyleSheet(QString::fromUtf8(""));

        gridLayoutBtn->addWidget(btn_9, 4, 2, 1, 1);

        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        sizePolicy1.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy1);
        btn_7->setMinimumSize(QSize(0, 55));
        btn_7->setFont(font3);
        btn_7->setFocusPolicy(Qt::NoFocus);
        btn_7->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_7, 4, 0, 1, 1);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        sizePolicy1.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy1);
        btn_3->setMinimumSize(QSize(0, 55));
        btn_3->setFont(font3);
        btn_3->setFocusPolicy(Qt::NoFocus);
        btn_3->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_3, 6, 2, 1, 1);

        log = new QPushButton(centralwidget);
        log->setObjectName(QString::fromUtf8("log"));
        sizePolicy1.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy1);
        log->setMinimumSize(QSize(0, 55));
        log->setFont(font2);
        log->setFocusPolicy(Qt::NoFocus);
        log->setAcceptDrops(true);

        gridLayoutBtn->addWidget(log, 2, 3, 1, 1);

        mod = new QPushButton(centralwidget);
        mod->setObjectName(QString::fromUtf8("mod"));
        sizePolicy1.setHeightForWidth(mod->sizePolicy().hasHeightForWidth());
        mod->setSizePolicy(sizePolicy1);
        mod->setMinimumSize(QSize(0, 55));
        mod->setFont(font2);
        mod->setFocusPolicy(Qt::NoFocus);
        mod->setAcceptDrops(true);

        gridLayoutBtn->addWidget(mod, 3, 2, 1, 1);

        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        sizePolicy1.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy1);
        btn_8->setMinimumSize(QSize(0, 55));
        btn_8->setFont(font3);
        btn_8->setFocusPolicy(Qt::NoFocus);
        btn_8->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_8, 4, 1, 1, 1);

        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        sizePolicy1.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy1);
        btn_5->setMinimumSize(QSize(0, 55));
        btn_5->setFont(font3);
        btn_5->setFocusPolicy(Qt::NoFocus);
        btn_5->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_5, 5, 1, 1, 1);

        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        sizePolicy1.setHeightForWidth(asin->sizePolicy().hasHeightForWidth());
        asin->setSizePolicy(sizePolicy1);
        asin->setMinimumSize(QSize(0, 55));
        asin->setFont(font2);
        asin->setFocusPolicy(Qt::NoFocus);
        asin->setAcceptDrops(true);

        gridLayoutBtn->addWidget(asin, 1, 0, 1, 1);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        sizePolicy1.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy1);
        btn_6->setMinimumSize(QSize(0, 55));
        btn_6->setFont(font3);
        btn_6->setFocusPolicy(Qt::NoFocus);
        btn_6->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_6, 5, 2, 1, 1);

        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sizePolicy1.setHeightForWidth(sqrt->sizePolicy().hasHeightForWidth());
        sqrt->setSizePolicy(sizePolicy1);
        sqrt->setMinimumSize(QSize(0, 55));
        sqrt->setFont(font2);
        sqrt->setFocusPolicy(Qt::NoFocus);
        sqrt->setAcceptDrops(true);

        gridLayoutBtn->addWidget(sqrt, 3, 0, 1, 1);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        sizePolicy1.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy1);
        btn_0->setMinimumSize(QSize(0, 55));
        btn_0->setFont(font3);
        btn_0->setFocusPolicy(Qt::NoFocus);
        btn_0->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_0, 7, 1, 1, 1);

        ln = new QPushButton(centralwidget);
        ln->setObjectName(QString::fromUtf8("ln"));
        sizePolicy1.setHeightForWidth(ln->sizePolicy().hasHeightForWidth());
        ln->setSizePolicy(sizePolicy1);
        ln->setMinimumSize(QSize(0, 55));
        ln->setFont(font2);
        ln->setFocusPolicy(Qt::NoFocus);
        ln->setAcceptDrops(true);

        gridLayoutBtn->addWidget(ln, 3, 3, 1, 1);

        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        sizePolicy1.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy1);
        btn_1->setMinimumSize(QSize(0, 55));
        btn_1->setFont(font3);
        btn_1->setFocusPolicy(Qt::NoFocus);
        btn_1->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_1, 6, 0, 1, 1);

        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        sizePolicy1.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy1);
        btn_4->setMinimumSize(QSize(0, 55));
        btn_4->setFont(font3);
        btn_4->setFocusPolicy(Qt::NoFocus);
        btn_4->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_4, 5, 0, 1, 1);

        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        sizePolicy1.setHeightForWidth(acos->sizePolicy().hasHeightForWidth());
        acos->setSizePolicy(sizePolicy1);
        acos->setMinimumSize(QSize(0, 55));
        acos->setFont(font2);
        acos->setFocusPolicy(Qt::NoFocus);
        acos->setAcceptDrops(true);

        gridLayoutBtn->addWidget(acos, 1, 1, 1, 1);

        mul = new QPushButton(centralwidget);
        mul->setObjectName(QString::fromUtf8("mul"));
        sizePolicy1.setHeightForWidth(mul->sizePolicy().hasHeightForWidth());
        mul->setSizePolicy(sizePolicy1);
        mul->setMinimumSize(QSize(0, 55));
        mul->setFont(font2);
        mul->setFocusPolicy(Qt::NoFocus);
        mul->setAcceptDrops(true);

        gridLayoutBtn->addWidget(mul, 6, 3, 1, 1);

        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy1.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy1);
        clear->setMinimumSize(QSize(0, 55));
        clear->setFont(font2);
        clear->setFocusPolicy(Qt::NoFocus);
        clear->setAcceptDrops(true);
        clear->setStyleSheet(QString::fromUtf8("QPushButton::hover {\n"
"	background-color: rgb(255, 199, 199);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: rgb(255, 238, 238);\n"
"}"));

        gridLayoutBtn->addWidget(clear, 1, 5, 1, 1);

        sub = new QPushButton(centralwidget);
        sub->setObjectName(QString::fromUtf8("sub"));
        sizePolicy1.setHeightForWidth(sub->sizePolicy().hasHeightForWidth());
        sub->setSizePolicy(sizePolicy1);
        sub->setMinimumSize(QSize(0, 55));
        sub->setFont(font2);
        sub->setFocusPolicy(Qt::NoFocus);
        sub->setAcceptDrops(true);

        gridLayoutBtn->addWidget(sub, 7, 3, 1, 1);

        memory = new QPushButton(centralwidget);
        memory->setObjectName(QString::fromUtf8("memory"));
        sizePolicy1.setHeightForWidth(memory->sizePolicy().hasHeightForWidth());
        memory->setSizePolicy(sizePolicy1);
        memory->setMinimumSize(QSize(0, 55));
        memory->setFont(font2);
        memory->setFocusPolicy(Qt::NoFocus);
        memory->setAcceptDrops(true);

        gridLayoutBtn->addWidget(memory, 2, 5, 1, 1);

        memory_r = new QPushButton(centralwidget);
        memory_r->setObjectName(QString::fromUtf8("memory_r"));
        sizePolicy1.setHeightForWidth(memory_r->sizePolicy().hasHeightForWidth());
        memory_r->setSizePolicy(sizePolicy1);
        memory_r->setMinimumSize(QSize(0, 55));
        memory_r->setFont(font2);
        memory_r->setFocusPolicy(Qt::NoFocus);
        memory_r->setAcceptDrops(true);

        gridLayoutBtn->addWidget(memory_r, 3, 5, 1, 1);

        result = new QPushButton(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        sizePolicy1.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy1);
        result->setMinimumSize(QSize(0, 55));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        font4.setStrikeOut(false);
        result->setFont(font4);
        result->setFocusPolicy(Qt::NoFocus);
        result->setAcceptDrops(true);
        result->setStyleSheet(QString::fromUtf8("QPushButton::hover {\n"
"	background-color: rgb(189, 218, 255);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color:rgb(219, 229, 243);\n"
"}\n"
""));

        gridLayoutBtn->addWidget(result, 7, 5, 1, 1);

        c_brack = new QPushButton(centralwidget);
        c_brack->setObjectName(QString::fromUtf8("c_brack"));
        sizePolicy1.setHeightForWidth(c_brack->sizePolicy().hasHeightForWidth());
        c_brack->setSizePolicy(sizePolicy1);
        c_brack->setMinimumSize(QSize(0, 55));
        c_brack->setFont(font2);
        c_brack->setFocusPolicy(Qt::NoFocus);
        c_brack->setAcceptDrops(true);

        gridLayoutBtn->addWidget(c_brack, 6, 5, 1, 1);

        o_brack = new QPushButton(centralwidget);
        o_brack->setObjectName(QString::fromUtf8("o_brack"));
        sizePolicy1.setHeightForWidth(o_brack->sizePolicy().hasHeightForWidth());
        o_brack->setSizePolicy(sizePolicy1);
        o_brack->setMinimumSize(QSize(0, 55));
        o_brack->setFont(font2);
        o_brack->setFocusPolicy(Qt::NoFocus);
        o_brack->setAcceptDrops(true);

        gridLayoutBtn->addWidget(o_brack, 5, 5, 1, 1);

        memory_c = new QPushButton(centralwidget);
        memory_c->setObjectName(QString::fromUtf8("memory_c"));
        sizePolicy1.setHeightForWidth(memory_c->sizePolicy().hasHeightForWidth());
        memory_c->setSizePolicy(sizePolicy1);
        memory_c->setMinimumSize(QSize(0, 55));
        memory_c->setFont(font2);
        memory_c->setFocusPolicy(Qt::NoFocus);
        memory_c->setAcceptDrops(true);

        gridLayoutBtn->addWidget(memory_c, 4, 5, 1, 1);

        devider = new QPushButton(centralwidget);
        devider->setObjectName(QString::fromUtf8("devider"));
        sizePolicy1.setHeightForWidth(devider->sizePolicy().hasHeightForWidth());
        devider->setSizePolicy(sizePolicy1);
        devider->setMinimumSize(QSize(0, 55));
        devider->setFont(font2);
        devider->setFocusPolicy(Qt::NoFocus);
        devider->setAcceptDrops(true);

        gridLayoutBtn->addWidget(devider, 7, 2, 1, 1);

        btn_x = new QPushButton(centralwidget);
        btn_x->setObjectName(QString::fromUtf8("btn_x"));
        sizePolicy1.setHeightForWidth(btn_x->sizePolicy().hasHeightForWidth());
        btn_x->setSizePolicy(sizePolicy1);
        btn_x->setMinimumSize(QSize(0, 55));
        btn_x->setFont(font2);
        btn_x->setFocusPolicy(Qt::NoFocus);
        btn_x->setAcceptDrops(true);

        gridLayoutBtn->addWidget(btn_x, 7, 0, 1, 1);


        verticalLayout->addLayout(gridLayoutBtn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setEnabled(true);
        menubar->setGeometry(QRect(0, 0, 386, 22));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Memory", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        back_sp->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        tan->setText(QCoreApplication::translate("MainWindow", "TAN", nullptr));
        cos->setText(QCoreApplication::translate("MainWindow", "COS", nullptr));
        exp->setText(QCoreApplication::translate("MainWindow", "EXP", nullptr));
        atan->setText(QCoreApplication::translate("MainWindow", "ATAN", nullptr));
        sin->setText(QCoreApplication::translate("MainWindow", "SIN", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        log->setText(QCoreApplication::translate("MainWindow", "LOG", nullptr));
        mod->setText(QCoreApplication::translate("MainWindow", "MOD", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        asin->setText(QCoreApplication::translate("MainWindow", "ASIN", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "SQRT", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ln->setText(QCoreApplication::translate("MainWindow", "LN", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        acos->setText(QCoreApplication::translate("MainWindow", "ACOS", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        memory->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        memory_r->setText(QCoreApplication::translate("MainWindow", "MR", nullptr));
#if QT_CONFIG(whatsthis)
        result->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        result->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        c_brack->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        o_brack->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        memory_c->setText(QCoreApplication::translate("MainWindow", "MC", nullptr));
        devider->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btn_x->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
