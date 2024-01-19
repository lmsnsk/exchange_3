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
  double ran_x_l = -3, ran_x_r = 3;
  double div = this->width() / (ran_x_r - ran_x_l);
  int centr_x = this->width() / 2, center_y = this->height() / 2;

  // axies
  p.setPen(QPen(Qt::blue, Qt::SolidLine));
  p.drawLine(0, center_y, 2 * centr_x, center_y);
  p.drawLine(centr_x, 0, centr_x, 2 * center_y);
  // text
  QRect rect(centr_x - 20, center_y, 20, 20);
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
    p.drawRect(i * div + centr_x, -y * div + center_y, 2, 2);
    i += (ran_x_r - ran_x_l) / step;
  }
}
