#include "plot.h"

#include "ui_plot.h"

extern "C" {
#include "../s21_smart_calc.h"
}

Plot::Plot(QWidget *parent) : QWidget(parent), ui(new Ui::Plot) {
  ui->setupUi(this);
}

Plot::~Plot() { delete ui; }

void Plot::slot_plot(QString str) {
  Plot::check = str;
  update();
}

void Plot::paintEvent(QPaintEvent *event) {
  Q_UNUSED(event);
  setlocale(LC_ALL, "C");

  QByteArray ba = check.toLocal8Bit();
  input_plot_str = ba.data();

  QPainter p(this);
  int step = 10000;
  double ran_x_l = -10, ran_x_r = 10;
  double scale_x = this->width() / (ran_x_r - ran_x_l);
  int centr_x = this->width() / 2, center_y = this->height() / 2;
  // grid
  p.setPen(QPen(Qt::gray, Qt::SolidLine));
  double grid_step_x = (ran_x_r - ran_x_l) / 10;
  for (int i = 0; i < this->height(); i += this->height() / 10) {
    p.drawLine(0, i, 2 * centr_x, i);
  }
  for (int i = 0; i < this->width(); i += this->width() / 10) {
    p.drawLine(i, 0, i, 2 * center_y);
  }
  // axies
  p.setPen(QPen(Qt::blue, 2, Qt::SolidLine));
  p.drawLine(0, center_y, 2 * centr_x, center_y);
  p.drawLine(-ran_x_l * scale_x, 0, -ran_x_l * scale_x, 2 * center_y);
  // text
  QRect rect(-ran_x_l * scale_x - 20, center_y, 20, 20);
  p.setPen(QPen(Qt::red, Qt::SolidLine));
  p.setFont(QFont("Arial", -1, -1, false));
  p.drawText(rect, Qt::AlignCenter, "0");
  // graph
  p.setPen(QPen(Qt::black, Qt::SolidLine));
  p.setBrush(QBrush(Qt::black, Qt::SolidPattern));
  double i = ran_x_l;
  while ((ran_x_r - ran_x_l > 0) && i < ran_x_r) {
    double y;
    char x[64];
    sprintf(x, "%e", i);
    s21_smart_calc(input_plot_str, &y, x);
    p.drawRect(i * scale_x - ran_x_l * scale_x, -y * scale_x + center_y, 2, 2);
    i += (ran_x_r - ran_x_l) / step;
  }
}

// int Plot::adaptive(double num) {
//   int count = 0;
//   while (num < 1 && num > 10) {
//     if (num > 10) {
//       num /= 10;
//       count--;
//     } else {
//       num *= 10;
//       count++;
//     }
//   }
//   return count;
// }