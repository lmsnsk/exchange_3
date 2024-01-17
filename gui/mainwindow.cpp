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
  ui->memory_field->setEnabled(false);
  ui->input_x->setEnabled(false);
  ui->centralwidget->setCursor(QCursor(QPixmap("../sources/cursor.png")));

  //  ui->btn_0->setStyleSheet("color: red");
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::keyPressEvent(QKeyEvent* event) {
  if (event->key() == Qt::Key_Enter)
    calc();
  else
    check_x();
}

void MainWindow::print_in_field(QString str) {
  if (ui->input_x->hasFocus())
    ui->input_x->insert(str);
  else
    ui->inputField->insert(str);
  check_x();
}

void MainWindow::on_btn_0_clicked() { print_in_field("0"); }
void MainWindow::on_btn_1_clicked() { print_in_field("1"); }
void MainWindow::on_btn_2_clicked() { print_in_field("2"); }
void MainWindow::on_btn_3_clicked() { print_in_field("3"); }
void MainWindow::on_btn_4_clicked() { print_in_field("4"); }
void MainWindow::on_btn_5_clicked() { print_in_field("5"); }
void MainWindow::on_btn_6_clicked() { print_in_field("6"); }
void MainWindow::on_btn_7_clicked() { print_in_field("7"); }
void MainWindow::on_btn_8_clicked() { print_in_field("8"); }
void MainWindow::on_btn_9_clicked() { print_in_field("9"); }
void MainWindow::on_devider_clicked() { print_in_field("."); }
void MainWindow::on_btn_x_clicked() { print_in_field("x"); }
void MainWindow::on_plus_clicked() { print_in_field("+"); }
void MainWindow::on_minus_clicked() { print_in_field("-"); }
void MainWindow::on_mul_clicked() { print_in_field("*"); }
void MainWindow::on_sub_clicked() { print_in_field("/"); }
void MainWindow::on_exp_clicked() { print_in_field("^"); }
void MainWindow::on_cos_clicked() { print_in_field("cos"); }
void MainWindow::on_sin_clicked() { print_in_field("sin"); }
void MainWindow::on_tan_clicked() { print_in_field("tan"); }
void MainWindow::on_acos_clicked() { print_in_field("acos"); }
void MainWindow::on_asin_clicked() { print_in_field("asin"); }
void MainWindow::on_atan_clicked() { print_in_field("atan"); }
void MainWindow::on_sqrt_clicked() { print_in_field("sqrt"); }
void MainWindow::on_ln_clicked() { print_in_field("ln"); }
void MainWindow::on_log_clicked() { print_in_field("log"); }
void MainWindow::on_mod_clicked() { print_in_field("mod"); }
void MainWindow::on_o_brack_clicked() { print_in_field("("); }
void MainWindow::on_c_brack_clicked() { print_in_field(")"); }

void MainWindow::on_back_sp_clicked() {
  ui->inputField->backspace();
  check_x();
}

void MainWindow::on_clear_clicked() {
  ui->inputField->setText("");
  ui->result_field->setText("0");
  ui->result_field->setStyleSheet("color: black");
  ui->input_x->setEnabled(false);
}

void MainWindow::on_memory_clicked() {
  QString memory = ui->result_field->text();
  char* memory_str = memory.toLocal8Bit().data();
  if (*memory_str && *memory_str != '0' &&
      strcmp("Invalid Expression!", memory_str)) {
    ui->memory_field->setText(memory);
    ui->memory_field->setEnabled(true);
  }
}

void MainWindow::on_memory_r_clicked() {
  QString memory = ui->memory_field->text();
  char* memory_str = memory.toLocal8Bit().data();
  if (*memory_str) {
    ui->inputField->insert(memory);
  }
}

void MainWindow::on_memory_c_clicked() {
  ui->memory_field->setText("");
  ui->memory_field->setEnabled(false);
}

void MainWindow::on_result_clicked() { calc(); }

void MainWindow::calc() {
  setlocale(LC_ALL, "C");

  check_x();
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

void MainWindow::check_x() {
  char* str = ui->inputField->text().toLocal8Bit().data();
  if (strchr(str, 'x'))
    ui->input_x->setEnabled(true);
  else
    ui->input_x->setEnabled(false);
}
