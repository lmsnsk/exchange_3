#include "credit.h"

#include "ui_credit.h"

extern "C" {
#include "../s21_smart_calc.h"
}

Credit::Credit(QWidget *parent) : QWidget(parent), ui(new Ui::Credit) {
  ui->setupUi(this);
  ui->loanAmountInput->setFocus();
  ui->loanAmountInput->setValidator(
      new QRegExpValidator(QRegExp("[0-9]*\\.?[0-9]*")));
  ui->timeInput->setValidator(new QIntValidator(1, 360, this));
  ui->rateInput->setValidator(
      new QRegExpValidator(QRegExp("[0-9]{0,3}\\.?[0-9]?")));
}

Credit::~Credit() { delete ui; }

void Credit::on_calculateButton_clicked() {
  setlocale(LC_ALL, "C");
  int type = 1;
  double pay, overpay, total_pay, first_pay;
  double amount = ui->loanAmountInput->text().toDouble();
  double time = ui->timeInput->text().toDouble();
  double rate_percent = ui->rateInput->text().toDouble();
  if (ui->differentRBtn->isChecked()) type = 2;
  if (amount && time && rate_percent) {
    ui->payRes->setText("");
    credit_calc(amount, rate_percent, time, type, &pay, &total_pay, &overpay,
                &first_pay);
    if (type == 2) {
      ui->payRes->setText(QString::number(first_pay, 'f', 1));
      ui->payRes->insert(" ... ");
    }
    ui->payRes->insert(QString::number(pay, 'f', 1));
    ui->overpayRes->setText(QString::number(overpay, 'f', 1));
    ui->totalPayRes->setText(QString::number(total_pay, 'f', 1));
  }
}
