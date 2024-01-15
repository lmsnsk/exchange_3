#include "mainwindow.h"

#include "ui_mainwindow.h"

extern "C" {
#include "../s21_smart_calc.h"
}

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
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
void MainWindow::on_clear_clicked() { ui->inputField->setText(""); }

void MainWindow::on_result_clicked() {
  List* input_stack = {0};
  List* output_stack = {0};
  List* numbers = {0};
  QString qstr = ui->inputField->text();
  QByteArray ba = qstr.toLocal8Bit();
  char* str = ba.data();
  std::cout << str;
  int er = validator(str);
  if (!er) er = parcer(&input_stack, str);
  if (!er) er = to_reverse_polish_notation(input_stack, &output_stack);
  if (!er) er = calculation(output_stack, &numbers);
  if (!er) {
    // double result = numbers->value;
    qDebug() << qstr;
  } else {
    ui->inputField->setText("ERROR: Invalid Expression!");
  }

  if (input_stack) destroy_stack(input_stack);
  if (output_stack) destroy_stack(output_stack);
  if (numbers) destroy_stack(numbers);
}
