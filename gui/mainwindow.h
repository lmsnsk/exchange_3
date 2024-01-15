#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <iostream>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 private slots:
  void on_btn_0_clicked();
  void on_btn_1_clicked();
  void on_btn_2_clicked();
  void on_btn_3_clicked();
  void on_btn_4_clicked();
  void on_btn_5_clicked();
  void on_btn_6_clicked();
  void on_btn_7_clicked();
  void on_btn_8_clicked();
  void on_btn_9_clicked();
  void on_devider_clicked();
  void on_btn_x_clicked();
  void on_plus_clicked();
  void on_minus_clicked();
  void on_mul_clicked();
  void on_sub_clicked();
  void on_exp_clicked();
  void on_cos_clicked();
  void on_sin_clicked();
  void on_tan_clicked();
  void on_acos_clicked();
  void on_asin_clicked();
  void on_atan_clicked();
  void on_sqrt_clicked();
  void on_ln_clicked();
  void on_log_clicked();
  void on_mod_clicked();
  void on_o_brack_clicked();
  void on_c_brack_clicked();
  void on_back_sp_clicked();
  void on_clear_clicked();
  void on_result_clicked();

 private:
  Ui::MainWindow *ui;
};
#endif  // MAINWINDOW_H