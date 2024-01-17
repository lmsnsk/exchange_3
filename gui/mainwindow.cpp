#include "mainwindow.h"

#include "ui_mainwindow.h"

extern "C" {
#include "../s21_smart_calc.h"
}

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  ui->input_x->setAlignment(Qt::AlignRight);
  ui->inputField->setAlignment(Qt::AlignRight);
  ui->result_field->setAlignment(Qt::AlignRight);
  ui->memory_field->setAlignment(Qt::AlignRight);
  ui->result_field->setText("0");
  ui->input_x->setText("1");
  ui->memory_field->setEnabled(false);
  ui->centralwidget->setCursor(QCursor(QPixmap("../sources/cursor.png")));

  //  ui->btn_0->setStyleSheet("color: red");
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_btn_0_clicked() { ui->inputField->insert("0"); }
void MainWindow::on_btn_1_clicked() { ui->inputField->insert("1"); }
void MainWindow::on_btn_2_clicked() { ui->inputField->insert("2"); }
void MainWindow::on_btn_3_clicked() { ui->inputField->insert("3"); }
void MainWindow::on_btn_4_clicked() { ui->inputField->insert("4"); }
void MainWindow::on_btn_5_clicked() { ui->inputField->insert("5"); }
void MainWindow::on_btn_6_clicked() { ui->inputField->insert("6"); }
void MainWindow::on_btn_7_clicked() { ui->inputField->insert("7"); }
void MainWindow::on_btn_8_clicked() { ui->inputField->insert("8"); }
void MainWindow::on_btn_9_clicked() { ui->inputField->insert("9"); }
void MainWindow::on_devider_clicked() { ui->inputField->insert("."); }
void MainWindow::on_btn_x_clicked() { ui->inputField->insert("x"); }
void MainWindow::on_plus_clicked() { ui->inputField->insert("+"); }
void MainWindow::on_minus_clicked() { ui->inputField->insert("-"); }
void MainWindow::on_mul_clicked() { ui->inputField->insert("*"); }
void MainWindow::on_sub_clicked() { ui->inputField->insert("/"); }
void MainWindow::on_exp_clicked() { ui->inputField->insert("^"); }
void MainWindow::on_cos_clicked() { ui->inputField->insert("cos"); }
void MainWindow::on_sin_clicked() { ui->inputField->insert("sin"); }
void MainWindow::on_tan_clicked() { ui->inputField->insert("tan"); }
void MainWindow::on_acos_clicked() { ui->inputField->insert("acos"); }
void MainWindow::on_asin_clicked() { ui->inputField->insert("asin"); }
void MainWindow::on_atan_clicked() { ui->inputField->insert("atan"); }
void MainWindow::on_sqrt_clicked() { ui->inputField->insert("sqrt"); }
void MainWindow::on_ln_clicked() { ui->inputField->insert("ln"); }
void MainWindow::on_log_clicked() { ui->inputField->insert("log"); }
void MainWindow::on_mod_clicked() { ui->inputField->insert("mod"); }
void MainWindow::on_o_brack_clicked() { ui->inputField->insert("("); }
void MainWindow::on_c_brack_clicked() { ui->inputField->insert(")"); }
void MainWindow::on_back_sp_clicked() { ui->inputField->backspace(); }

void MainWindow::on_clear_clicked() {
  ui->inputField->setText("");
  ui->result_field->setText("0");
  ui->input_x->setText("1");
  ui->result_field->setStyleSheet("color: black");
}

void MainWindow::on_memory_clicked() {
  QString memory = ui->result_field->text();
  QByteArray memory_ba = memory.toLocal8Bit();
  char* memory_str = memory_ba.data();
  if (*memory_str && *memory_str != '0') {
    ui->memory_field->setText(memory);
    ui->memory_field->setEnabled(true);
  }
}

void MainWindow::on_memory_r_clicked() {
  QString memory = ui->memory_field->text();
  QByteArray memory_ba = memory.toLocal8Bit();
  char* memory_str = memory_ba.data();
  if (*memory_str) {
    ui->inputField->insert(memory);
  }
}

void MainWindow::on_memory_c_clicked() {
  ui->memory_field->setText("");
  ui->memory_field->setEnabled(false);
}

void MainWindow::on_result_clicked() {
  setlocale(LC_ALL, "C");

  QString qstr = ui->inputField->text();
  QString x_qstr = ui->input_x->text();
  QByteArray ba = qstr.toLocal8Bit();
  QByteArray x_ba = x_qstr.toLocal8Bit();
  char* str = ba.data();
  char* x_str = x_ba.data();
  double result;
  int er = s21_smart_calc(str, &result, x_str);
  if (!er) {
    QString toStr = QString::number(result, 'g', 10);
    ui->result_field->setText(toStr);
    ui->result_field->setStyleSheet("color: black");
  } else if (er == 1) {
    ui->result_field->setText("Invalid Expression!");
    ui->result_field->setStyleSheet("color: red");
  }
}
