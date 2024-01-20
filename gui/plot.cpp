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
  double ran_x_l = -20, ran_x_r = 200;
  double scale_x = this->width() / (ran_x_r - ran_x_l);
  int center_x = this->width() / 2, center_y = this->height() / 2;
  // grid
  p.setPen(QPen(Qt::gray, Qt::SolidLine));
  double grid_step_x = (ran_x_r - ran_x_l) / 10;
  double interval_grid_step;
  int counter = 0, counter_left_grid = 0;

  while (abs(grid_step_x) < 1 || abs(grid_step_x) >= 10) {
    if (abs(grid_step_x) < 1) {
      grid_step_x *= 10;
      counter--;
    } else {
      grid_step_x /= 10;
      counter++;
    }
  }

  if (grid_step_x < 2.5) {
    interval_grid_step = 1.0;
  } else if (grid_step_x < 7.5) {
    interval_grid_step = 5.0;
  } else {
    interval_grid_step = 10.0;
  }
  interval_grid_step *= pow(10, counter);

  double left_grid = ran_x_l;
  while (abs(left_grid) <= 1 || abs(left_grid) > 10) {
    if (abs(left_grid) < 1) {
      left_grid *= 10;
      counter_left_grid--;
    } else {
      left_grid /= 10;
      counter_left_grid++;
    }
  }
  if (abs(left_grid) < 2)
    left_grid = left_grid > 0 ? 1 : -2;
  else if (abs(left_grid) < 3)
    left_grid = left_grid > 0 ? 2 : -3;
  else if (abs(left_grid) < 4)
    left_grid = left_grid > 0 ? 3 : -4;
  else if (abs(left_grid) < 5)
    left_grid = left_grid > 0 ? 4 : -5;
  else if (abs(left_grid) < 6)
    left_grid = left_grid > 0 ? 5 : -6;
  else if (abs(left_grid) < 7)
    left_grid = left_grid > 0 ? 6 : -7;
  else if (abs(left_grid) < 8)
    left_grid = left_grid > 0 ? 7 : -8;
  else if (abs(left_grid) < 9)
    left_grid = left_grid > 0 ? 8 : -9;

  left_grid *= pow(10, counter_left_grid);

  // y
  double i = center_y - 10 * interval_grid_step * scale_x;
  while (i < center_y + 10 * interval_grid_step * scale_x) {
    p.drawLine(0, i, 2 * center_x, i);
    i += interval_grid_step * scale_x;
  }
  // x
  // printf("%g\n", left_grid);
  // printf("%g\n", interval_grid_step);
  // printf("%g\n", scale_x);
  double ost = abs(ran_x_l) - interval_grid_step;
  while (ost > interval_grid_step) {
    ost -= interval_grid_step;
  }

  i = left_grid * scale_x;
  while (i < ran_x_r * scale_x * 2) {
    p.drawLine(i - left_grid * scale_x + ost * scale_x, 0,
               i - left_grid * scale_x + ost * scale_x, 2 * center_y);
    i += interval_grid_step * scale_x;
  };
  // axies
  p.setPen(QPen(Qt::blue, 2, Qt::SolidLine));
  p.drawLine(0, center_y, 2 * center_x, center_y);
  p.drawLine(-ran_x_l * scale_x, 0, -ran_x_l * scale_x, 2 * center_y);
  // text
  QRect rect(-ran_x_l * scale_x - 20, center_y, 20, 20);
  p.setPen(QPen(Qt::red, Qt::SolidLine));
  p.setFont(QFont("Arial", -1, -1, false));
  p.drawText(rect, Qt::AlignCenter, "0");
  // graph
  p.setPen(QPen(Qt::black, Qt::SolidLine));
  p.setBrush(QBrush(Qt::black, Qt::SolidPattern));
  i = ran_x_l;
  while ((ran_x_r - ran_x_l > 0) && i < ran_x_r) {
    double y;
    char x[64];
    sprintf(x, "%e", i);
    s21_smart_calc(input_plot_str, &y, x);
    p.drawRect(i * scale_x - ran_x_l * scale_x, -y * scale_x + center_y, 2, 2);
    i += (ran_x_r - ran_x_l) / step;
  }
  p.setPen(QPen(QColor(0, 50, 0, 255), Qt::SolidLine));
  p.setFont(QFont("Arial", -1, -1, false));
  QRect rect1(20, 5, 500, 40);
  char str[128];
  sprintf(str, "Range: from %g to %g\nCeil: %g", ran_x_l, ran_x_r,
          interval_grid_step);

  QString qstr = QString::fromUtf8(str);
  p.drawText(rect1, Qt::AlignCenter, qstr);
}
