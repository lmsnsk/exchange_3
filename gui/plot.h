#ifndef PLOT_H
#define PLOT_H

#include <QPainter>
#include <QWidget>

namespace Ui {
class Plot;
}

class Plot : public QWidget {
  Q_OBJECT

 public:
  explicit Plot(QWidget *parent = nullptr);
  ~Plot();

 public slots:
  void slot(QString a);

 private:
  Ui::Plot *ui;
  void paintEvent(QPaintEvent *event);
};

#endif  // PLOT_H
