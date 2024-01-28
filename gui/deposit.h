#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <locale.h>

#include <QDebug>
#include <QIcon>
#include <QValidator>
#include <QWidget>

namespace Ui {
class Deposit;
}

class Deposit : public QWidget {
  Q_OBJECT

 public:
  explicit Deposit(QWidget *parent = nullptr);
  ~Deposit();

 private slots:
  void on_calculate_clicked();
  void on_comboBox_activated(int);
  void on_capitalizationCheckBox_clicked();

 private:
  int payout;
  Ui::Deposit *ui;
};

#endif  // DEPOSIT_H
