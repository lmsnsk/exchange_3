/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QGridLayout *gridLayout;
    QLineEdit *rateInput;
    QPushButton *calculateButton;
    QLabel *label_2;
    QLineEdit *overpayRes;
    QLabel *label_4;
    QLineEdit *loanAmountInput;
    QLabel *label;
    QLineEdit *payRes;
    QLabel *label_3;
    QLineEdit *timeInput;
    QSpacerItem *verticalSpacer;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *totalPayRes;
    QRadioButton *equalRBtn;
    QRadioButton *differentRBtn;

    void setupUi(QWidget *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName(QString::fromUtf8("Credit"));
        Credit->resize(358, 300);
        Credit->setStyleSheet(QString::fromUtf8("MainWindow {\n"
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
        gridLayout = new QGridLayout(Credit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        rateInput = new QLineEdit(Credit);
        rateInput->setObjectName(QString::fromUtf8("rateInput"));
        rateInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(rateInput, 2, 1, 1, 1);

        calculateButton = new QPushButton(Credit);
        calculateButton->setObjectName(QString::fromUtf8("calculateButton"));
        calculateButton->setMinimumSize(QSize(0, 30));
        calculateButton->setMaximumSize(QSize(16777215, 30));
        calculateButton->setFocusPolicy(Qt::TabFocus);
        calculateButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid black;\n"
"}"));

        gridLayout->addWidget(calculateButton, 6, 0, 1, 2);

        label_2 = new QLabel(Credit);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        overpayRes = new QLineEdit(Credit);
        overpayRes->setObjectName(QString::fromUtf8("overpayRes"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        overpayRes->setFont(font);
        overpayRes->setCursor(QCursor(Qt::ArrowCursor));
        overpayRes->setFocusPolicy(Qt::NoFocus);
        overpayRes->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border:none;\n"
"	background-color: transparent;\n"
"}"));
        overpayRes->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(overpayRes, 8, 1, 1, 1);

        label_4 = new QLabel(Credit);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        loanAmountInput = new QLineEdit(Credit);
        loanAmountInput->setObjectName(QString::fromUtf8("loanAmountInput"));
        loanAmountInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(loanAmountInput, 0, 1, 1, 1);

        label = new QLabel(Credit);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        payRes = new QLineEdit(Credit);
        payRes->setObjectName(QString::fromUtf8("payRes"));
        payRes->setFont(font);
        payRes->setCursor(QCursor(Qt::ArrowCursor));
        payRes->setFocusPolicy(Qt::NoFocus);
        payRes->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border:none;\n"
"	background-color: transparent;\n"
"}"));
        payRes->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(payRes, 7, 1, 1, 1);

        label_3 = new QLabel(Credit);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        timeInput = new QLineEdit(Credit);
        timeInput->setObjectName(QString::fromUtf8("timeInput"));
        timeInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(timeInput, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        label_6 = new QLabel(Credit);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        label_5 = new QLabel(Credit);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        totalPayRes = new QLineEdit(Credit);
        totalPayRes->setObjectName(QString::fromUtf8("totalPayRes"));
        totalPayRes->setFont(font);
        totalPayRes->setCursor(QCursor(Qt::ArrowCursor));
        totalPayRes->setFocusPolicy(Qt::NoFocus);
        totalPayRes->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border:none;\n"
"	background-color: transparent;\n"
"}"));
        totalPayRes->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(totalPayRes, 9, 1, 1, 1);

        equalRBtn = new QRadioButton(Credit);
        equalRBtn->setObjectName(QString::fromUtf8("equalRBtn"));
        equalRBtn->setChecked(true);

        gridLayout->addWidget(equalRBtn, 3, 0, 1, 2);

        differentRBtn = new QRadioButton(Credit);
        differentRBtn->setObjectName(QString::fromUtf8("differentRBtn"));

        gridLayout->addWidget(differentRBtn, 4, 0, 1, 2);


        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QWidget *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Credit calculator", nullptr));
        calculateButton->setText(QCoreApplication::translate("Credit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("Credit", "\320\241\321\202\320\260\320\262\320\272\320\260, %:", nullptr));
        label_4->setText(QCoreApplication::translate("Credit", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266:", nullptr));
        label->setText(QCoreApplication::translate("Credit", "\320\241\321\203\320\274\320\274\320\260 \320\267\320\260\320\271\320\274\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("Credit", "\320\241\321\200\320\276\320\272 \320\267\320\260\320\271\320\274\320\260, \320\274\320\265\321\201.:", nullptr));
        label_6->setText(QCoreApplication::translate("Credit", "\320\236\320\261\321\211\320\260\321\217 \321\201\321\203\320\274\320\274\320\260 \320\262\321\213\320\277\320\273\320\260\321\202:", nullptr));
        label_5->setText(QCoreApplication::translate("Credit", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\260\320\274:", nullptr));
        equalRBtn->setText(QCoreApplication::translate("Credit", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265 \320\277\320\273\320\260\321\202\320\265\320\266\320\270", nullptr));
        differentRBtn->setText(QCoreApplication::translate("Credit", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\277\320\273\320\260\321\202\320\265\320\266\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
