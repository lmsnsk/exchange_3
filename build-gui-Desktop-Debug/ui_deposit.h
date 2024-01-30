/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deposit
{
public:
    QGridLayout *gridLayout_2;
    QLineEdit *nalogResult;
    QCheckBox *plus_minus_checkBox;
    QLineEdit *valueInput;
    QLineEdit *rateInput;
    QPushButton *calculate;
    QLineEdit *termInput;
    QLineEdit *percentResult;
    QLabel *label_10;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *mainResult;
    QLabel *label_13;
    QLabel *label_2;
    QLabel *label_3;
    QComboBox *minusBox;
    QSpacerItem *verticalSpacer;
    QComboBox *plusBox;
    QLabel *label_7;
    QLineEdit *minusInput;
    QLabel *label_8;
    QLineEdit *plusInput;
    QComboBox *comboBox;
    QCheckBox *capitalizationCheckBox;
    QLineEdit *nalogInput;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_12;

    void setupUi(QWidget *Deposit)
    {
        if (Deposit->objectName().isEmpty())
            Deposit->setObjectName(QString::fromUtf8("Deposit"));
        Deposit->resize(400, 467);
        Deposit->setStyleSheet(QString::fromUtf8("MainWindow {\n"
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
        gridLayout_2 = new QGridLayout(Deposit);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        nalogResult = new QLineEdit(Deposit);
        nalogResult->setObjectName(QString::fromUtf8("nalogResult"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nalogResult->sizePolicy().hasHeightForWidth());
        nalogResult->setSizePolicy(sizePolicy);
        nalogResult->setMinimumSize(QSize(0, 20));
        nalogResult->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        nalogResult->setFont(font);
        nalogResult->setFocusPolicy(Qt::NoFocus);
        nalogResult->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border:none;\n"
"	background-color: transparent;\n"
"}"));
        nalogResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(nalogResult, 16, 1, 1, 1);

        plus_minus_checkBox = new QCheckBox(Deposit);
        plus_minus_checkBox->setObjectName(QString::fromUtf8("plus_minus_checkBox"));

        gridLayout_2->addWidget(plus_minus_checkBox, 6, 0, 1, 1);

        valueInput = new QLineEdit(Deposit);
        valueInput->setObjectName(QString::fromUtf8("valueInput"));
        sizePolicy.setHeightForWidth(valueInput->sizePolicy().hasHeightForWidth());
        valueInput->setSizePolicy(sizePolicy);
        valueInput->setMinimumSize(QSize(0, 20));
        valueInput->setMaximumSize(QSize(16777215, 25));
        valueInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(valueInput, 0, 1, 1, 1);

        rateInput = new QLineEdit(Deposit);
        rateInput->setObjectName(QString::fromUtf8("rateInput"));
        sizePolicy.setHeightForWidth(rateInput->sizePolicy().hasHeightForWidth());
        rateInput->setSizePolicy(sizePolicy);
        rateInput->setMinimumSize(QSize(0, 20));
        rateInput->setMaximumSize(QSize(16777215, 25));
        rateInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(rateInput, 2, 1, 1, 1);

        calculate = new QPushButton(Deposit);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setMinimumSize(QSize(0, 30));
        calculate->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(12);
        calculate->setFont(font1);
        calculate->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:1px solid black;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: rgb(189, 218, 255);\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color:rgb(219, 229, 243);\n"
"}"));

        gridLayout_2->addWidget(calculate, 12, 0, 1, 2);

        termInput = new QLineEdit(Deposit);
        termInput->setObjectName(QString::fromUtf8("termInput"));
        sizePolicy.setHeightForWidth(termInput->sizePolicy().hasHeightForWidth());
        termInput->setSizePolicy(sizePolicy);
        termInput->setMinimumSize(QSize(0, 20));
        termInput->setMaximumSize(QSize(16777215, 25));
        termInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(termInput, 1, 1, 1, 1);

        percentResult = new QLineEdit(Deposit);
        percentResult->setObjectName(QString::fromUtf8("percentResult"));
        sizePolicy.setHeightForWidth(percentResult->sizePolicy().hasHeightForWidth());
        percentResult->setSizePolicy(sizePolicy);
        percentResult->setMinimumSize(QSize(0, 20));
        percentResult->setMaximumSize(QSize(16777215, 25));
        percentResult->setFont(font);
        percentResult->setFocusPolicy(Qt::NoFocus);
        percentResult->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border:none;\n"
"	background-color: transparent;\n"
"}"));
        percentResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(percentResult, 13, 1, 1, 1);

        label_10 = new QLabel(Deposit);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setEnabled(false);

        gridLayout_2->addWidget(label_10, 7, 0, 1, 1);

        label_4 = new QLabel(Deposit);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(Deposit);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 15, 0, 1, 1);

        mainResult = new QLineEdit(Deposit);
        mainResult->setObjectName(QString::fromUtf8("mainResult"));
        sizePolicy.setHeightForWidth(mainResult->sizePolicy().hasHeightForWidth());
        mainResult->setSizePolicy(sizePolicy);
        mainResult->setMinimumSize(QSize(0, 20));
        mainResult->setMaximumSize(QSize(16777215, 25));
        mainResult->setFont(font);
        mainResult->setFocusPolicy(Qt::NoFocus);
        mainResult->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	border:none;\n"
"	background-color: transparent;\n"
"}"));
        mainResult->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(mainResult, 15, 1, 1, 1);

        label_13 = new QLabel(Deposit);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setEnabled(false);

        gridLayout_2->addWidget(label_13, 9, 0, 1, 1);

        label_2 = new QLabel(Deposit);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(Deposit);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(false);

        gridLayout_2->addWidget(label_3, 5, 0, 1, 1);

        minusBox = new QComboBox(Deposit);
        minusBox->addItem(QString());
        minusBox->addItem(QString());
        minusBox->addItem(QString());
        minusBox->addItem(QString());
        minusBox->addItem(QString());
        minusBox->setObjectName(QString::fromUtf8("minusBox"));
        minusBox->setEnabled(false);

        gridLayout_2->addWidget(minusBox, 9, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_2->addItem(verticalSpacer, 11, 0, 1, 2);

        plusBox = new QComboBox(Deposit);
        plusBox->addItem(QString());
        plusBox->addItem(QString());
        plusBox->addItem(QString());
        plusBox->addItem(QString());
        plusBox->addItem(QString());
        plusBox->setObjectName(QString::fromUtf8("plusBox"));
        plusBox->setEnabled(false);

        gridLayout_2->addWidget(plusBox, 7, 1, 1, 1);

        label_7 = new QLabel(Deposit);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 16, 0, 1, 1);

        minusInput = new QLineEdit(Deposit);
        minusInput->setObjectName(QString::fromUtf8("minusInput"));
        minusInput->setEnabled(false);
        sizePolicy.setHeightForWidth(minusInput->sizePolicy().hasHeightForWidth());
        minusInput->setSizePolicy(sizePolicy);
        minusInput->setMinimumSize(QSize(0, 20));
        minusInput->setMaximumSize(QSize(16777215, 25));
        minusInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(minusInput, 10, 1, 1, 1);

        label_8 = new QLabel(Deposit);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        plusInput = new QLineEdit(Deposit);
        plusInput->setObjectName(QString::fromUtf8("plusInput"));
        plusInput->setEnabled(false);
        sizePolicy.setHeightForWidth(plusInput->sizePolicy().hasHeightForWidth());
        plusInput->setSizePolicy(sizePolicy);
        plusInput->setMinimumSize(QSize(0, 20));
        plusInput->setMaximumSize(QSize(16777215, 25));
        plusInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(plusInput, 8, 1, 1, 1);

        comboBox = new QComboBox(Deposit);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEnabled(false);

        gridLayout_2->addWidget(comboBox, 5, 1, 1, 1);

        capitalizationCheckBox = new QCheckBox(Deposit);
        capitalizationCheckBox->setObjectName(QString::fromUtf8("capitalizationCheckBox"));

        gridLayout_2->addWidget(capitalizationCheckBox, 4, 0, 1, 2);

        nalogInput = new QLineEdit(Deposit);
        nalogInput->setObjectName(QString::fromUtf8("nalogInput"));
        sizePolicy.setHeightForWidth(nalogInput->sizePolicy().hasHeightForWidth());
        nalogInput->setSizePolicy(sizePolicy);
        nalogInput->setMinimumSize(QSize(0, 20));
        nalogInput->setMaximumSize(QSize(16777215, 25));
        nalogInput->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(nalogInput, 3, 1, 1, 1);

        label_11 = new QLabel(Deposit);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setEnabled(false);

        gridLayout_2->addWidget(label_11, 8, 0, 1, 1);

        label_5 = new QLabel(Deposit);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 13, 0, 1, 1);

        label = new QLabel(Deposit);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_12 = new QLabel(Deposit);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setEnabled(false);

        gridLayout_2->addWidget(label_12, 10, 0, 1, 1);

        QWidget::setTabOrder(valueInput, termInput);
        QWidget::setTabOrder(termInput, rateInput);
        QWidget::setTabOrder(rateInput, nalogInput);
        QWidget::setTabOrder(nalogInput, capitalizationCheckBox);
        QWidget::setTabOrder(capitalizationCheckBox, comboBox);
        QWidget::setTabOrder(comboBox, plus_minus_checkBox);
        QWidget::setTabOrder(plus_minus_checkBox, plusBox);
        QWidget::setTabOrder(plusBox, plusInput);
        QWidget::setTabOrder(plusInput, minusInput);
        QWidget::setTabOrder(minusInput, minusBox);
        QWidget::setTabOrder(minusBox, calculate);

        retranslateUi(Deposit);

        QMetaObject::connectSlotsByName(Deposit);
    } // setupUi

    void retranslateUi(QWidget *Deposit)
    {
        Deposit->setWindowTitle(QCoreApplication::translate("Deposit", "Deposit calculator", nullptr));
        plus_minus_checkBox->setText(QCoreApplication::translate("Deposit", "\320\237\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217 \320\270 \321\201\320\275\321\217\321\202\320\270\321\217", nullptr));
        calculate->setText(QCoreApplication::translate("Deposit", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_10->setText(QCoreApplication::translate("Deposit", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\271:", nullptr));
        label_4->setText(QCoreApplication::translate("Deposit", "\320\241\321\200\320\276\320\272 \320\262\320\272\320\273\320\260\320\264\320\260, \320\274\320\265\321\201.:", nullptr));
        label_6->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260 \321\201 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\260\320\274\320\270:", nullptr));
        label_13->setText(QCoreApplication::translate("Deposit", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \321\201\320\275\321\217\321\202\320\270\320\271:", nullptr));
        label_2->setText(QCoreApplication::translate("Deposit", "\320\241\321\202\320\260\320\262\320\272\320\260 \320\277\320\276 \320\262\320\272\320\273\320\260\320\264\321\203, %:", nullptr));
        label_3->setText(QCoreApplication::translate("Deposit", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\272\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\320\270:", nullptr));
        minusBox->setItemText(0, QString());
        minusBox->setItemText(1, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        minusBox->setItemText(2, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        minusBox->setItemText(3, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        minusBox->setItemText(4, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        plusBox->setItemText(0, QString());
        plusBox->setItemText(1, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\274\320\265\321\201\321\217\321\206", nullptr));
        plusBox->setItemText(2, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\272\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        plusBox->setItemText(3, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\277\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        plusBox->setItemText(4, QCoreApplication::translate("Deposit", "\320\240\320\260\320\267 \320\262 \320\263\320\276\320\264", nullptr));

        label_7->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\275\320\260\320\273\320\276\320\263\320\260:", nullptr));
        label_8->setText(QCoreApplication::translate("Deposit", "\320\232\320\273\321\216\321\207\320\265\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260, %:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Deposit", "\320\234\320\265\321\201\321\217\321\206", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Deposit", "\320\232\320\262\320\260\321\200\321\202\320\260\320\273", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Deposit", "\320\237\320\276\320\273\320\263\320\276\320\264\320\260", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("Deposit", "\320\223\320\276\320\264", nullptr));

        capitalizationCheckBox->setText(QCoreApplication::translate("Deposit", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        label_11->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\277\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\271:", nullptr));
        label_5->setText(QCoreApplication::translate("Deposit", "\320\235\320\260\321\207\320\270\321\201\320\273\320\265\320\275\320\275\321\213\320\265 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\321\213:", nullptr));
        label->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260:", nullptr));
        label_12->setText(QCoreApplication::translate("Deposit", "\320\241\321\203\320\274\320\274\320\260 \321\201\320\275\321\217\321\202\320\270\320\271:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deposit: public Ui_Deposit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSIT_H
