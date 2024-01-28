#include "deposit.h"

#include "ui_deposit.h"

extern "C" {
#include "../s21_smart_calc.h"
}

Deposit::Deposit(QWidget* parent) : QWidget(parent), ui(new Ui::Deposit) {
  ui->setupUi(this);
  setWindowIcon(QIcon(":img/img/calc.ico"));
  ui->valueInput->setFocus();
  ui->valueInput->setValidator(
      new QRegExpValidator(QRegExp("[0-9]*\\.?[0-9]*")));
  ui->termInput->setValidator(new QIntValidator(1, 360, this));
  ui->rateInput->setValidator(
      new QRegExpValidator(QRegExp("[0-9]{0,3}\\.?[0-9]?")));
  ui->nalogInput->setValidator(
      new QRegExpValidator(QRegExp("[0-9]{0,3}\\.?[0-9]?")));
  ui->percentResult->setText("0");
  ui->nalogResult->setText("0");
  ui->mainResult->setText("0");
  payout = 1;
}

Deposit::~Deposit() { delete ui; }

void Deposit::on_calculate_clicked() {
  setlocale(LC_ALL, "C");

  int error = 0;
  double percent, nalog, result;
  double value = ui->valueInput->text().toDouble();
  double term = ui->termInput->text().toDouble();
  double rate = ui->rateInput->text().toDouble();
  double nalog_rate = ui->nalogInput->text().toDouble();
  int capitalization = ui->capitalizationCheckBox->isChecked() ? 1 : 0;
  Change plus[128] = {0};
  Change minus[128] = {0};
  error = deposit_calc(value, term, rate, nalog_rate, payout, capitalization,
                       plus, minus, &percent, &nalog, &result);
  if (!error) {
    ui->percentResult->setText(QString::number(percent, 'f', 1));
    ui->nalogResult->setText(QString::number(nalog, 'f', 1));
    ui->mainResult->setText(QString::number(result, 'f', 1));
  } else {
    ui->percentResult->setText("0");
    ui->nalogResult->setText("0");
    ui->mainResult->setText("0");
  }
}

void Deposit::on_comboBox_activated(int index) {
  if (index == 0)
    payout = 1;
  else if (index == 1)
    payout = 3;
  else if (index == 2)
    payout = 6;
  else if (index == 3)
    payout = 12;
}

void Deposit::on_capitalizationCheckBox_clicked() {
  if (ui->capitalizationCheckBox->isChecked()) {
    ui->label_3->setEnabled(true);
    ui->comboBox->setEnabled(true);
  } else {
    ui->label_3->setEnabled(false);
    ui->comboBox->setEnabled(false);
  }
}
