#ifndef PLOT_H
#define PLOT_H

#include <locale.h>
#include <stdio.h>

#include <QDebug>
#include <QPainter>
#include <QWidget>

namespace Ui {
class Plot;
}

class Plot : public QWidget {
  Q_OBJECT

 protected:
  void paintEvent(QPaintEvent *event);

 public:
  explicit Plot(QWidget *parent = nullptr);
  ~Plot();

 public slots:
  void slot_plot(QString str);

 private:
  QString check;
  char *input_plot_str;
  Ui::Plot *ui;
  // void grid_drawing(QPainter p, double ran_x_r, double ran_x_l, double
  // scale_x, double center_x, double center_y);
};

#endif  // PLOT_H
