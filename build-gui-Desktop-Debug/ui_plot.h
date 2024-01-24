/********************************************************************************
** Form generated from reading UI file 'plot.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_H
#define UI_PLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Plot
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLineEdit *rangeFrom;
    QLabel *label_2;
    QLineEdit *rangeTo;
    QLabel *label_4;
    QLabel *labelCell;
    QSpacerItem *horizontalSpacer_2;
    QLabel *IncorrectRange;

    void setupUi(QWidget *Plot)
    {
        if (Plot->objectName().isEmpty())
            Plot->setObjectName(QString::fromUtf8("Plot"));
        Plot->resize(640, 480);
        Plot->setStyleSheet(QString::fromUtf8("MainWindow {\n"
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
        horizontalLayoutWidget = new QWidget(Plot);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-1, 0, 641, 27));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        rangeFrom = new QLineEdit(horizontalLayoutWidget);
        rangeFrom->setObjectName(QString::fromUtf8("rangeFrom"));
        rangeFrom->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(rangeFrom);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        rangeTo = new QLineEdit(horizontalLayoutWidget);
        rangeTo->setObjectName(QString::fromUtf8("rangeTo"));
        rangeTo->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout->addWidget(rangeTo);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        labelCell = new QLabel(horizontalLayoutWidget);
        labelCell->setObjectName(QString::fromUtf8("labelCell"));

        horizontalLayout->addWidget(labelCell);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        IncorrectRange = new QLabel(Plot);
        IncorrectRange->setObjectName(QString::fromUtf8("IncorrectRange"));
        IncorrectRange->setEnabled(true);
        IncorrectRange->setGeometry(QRect(170, 220, 271, 41));
        QFont font;
        font.setPointSize(18);
        IncorrectRange->setFont(font);
        IncorrectRange->setAlignment(Qt::AlignCenter);

        retranslateUi(Plot);

        QMetaObject::connectSlotsByName(Plot);
    } // setupUi

    void retranslateUi(QWidget *Plot)
    {
        Plot->setWindowTitle(QCoreApplication::translate("Plot", "Plot", nullptr));
        label->setText(QCoreApplication::translate("Plot", "Range from:", nullptr));
        label_2->setText(QCoreApplication::translate("Plot", "to:", nullptr));
        label_4->setText(QCoreApplication::translate("Plot", "Cell: ", nullptr));
        labelCell->setText(QString());
        IncorrectRange->setText(QCoreApplication::translate("Plot", "Incorrect range!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Plot: public Ui_Plot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_H
