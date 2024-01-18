#include "plot.h"

#include "ui_plot.h"

Plot::Plot(QWidget* parent) : QWidget(parent), ui(new Ui::Plot) {
  ui->setupUi(this);
  ui->label->setText("esfewfewfef");
}

Plot::~Plot() { delete ui; }

void Plot::slot(QString a) { ui->label->setText(a); }

void Plot::paintEvent(QPaintEvent* event) {
  double f, dx = 0;
  double h = 0.001, k = 0.05, a = 200;  // коэффициенты настройки графика
  QPainter p(this);  // объект для рисования
  int x = this->width() / 2, y = this->height() / 2;  // центр окон
  p.setPen(QPen(Qt::blue, Qt::SolidLine));  // цвет и тип пера
  p.drawLine(0, y, 2 * x, y);
  p.drawLine(x, 0, x, 2 * y);     // координатные оси
  QRect rect(x - 20, y, 20, 20);  // прямоугольник для текста
  p.setPen(QPen(Qt::red, Qt::SolidLine));
  p.setFont(QFont("Arial", -1, -1, false));  // зададим свойства шрифта
  p.drawText(rect, Qt::AlignCenter, "0");
  p.setPen(QPen(QColor(0, 100, 50, 255), Qt::SolidLine));
  /*построение графика*/
  // QString qstr = ui->result_field->text();
  // char* str = memory_qstr.toLocal8Bit().data();
  // for (int i = 0; i < 100; i++) {
  //   s21_smart_calc(ui->result_field->text());
  //   p.drawPoint(i, f);
  //   dx = dx + h;
  // }
}
