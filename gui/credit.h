#ifndef CREDIT_H
#define CREDIT_H

#include <locale.h>

#include <QValidator>
#include <QWidget>

namespace Ui {
class Credit;
}

class Credit : public QWidget {
  Q_OBJECT

 public:
  explicit Credit(QWidget *parent = nullptr);
  ~Credit();

 private slots:
  void on_calculateButton_clicked();

 private:
  Ui::Credit *ui;
};

#endif  // CREDIT_H
