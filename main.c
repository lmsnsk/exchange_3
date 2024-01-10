#include "s21_smart_calc.h"

int main(void) {
  // char str[] = " (54-(-3))-(() .44 + 2,88)   ";

  // int er = validator(str);
  // if (er)
  //   printf("ERROR: Invalid exptession!\n");
  // else
  //   printf("%s\n", str);

  List* list = init_stack(1.0, 1, 1);
  list = push_stack(2.0, 1, 1, list);
  list = push_stack(3.0, 1, 1, list);
  list = push_stack(4.0, 1, 1, list);

  list = pop_stack(list);
  if (list) {
    List* p = list;
    while (p) {
      printf("%f\n", p->value);
      p = p->next;
    }
    destroy_stack(list);
  }
  return 0;
}