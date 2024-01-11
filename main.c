#include "s21_smart_calc.h"

int main(void) {
  List* input_stack = init_stack(666.666, 999, 999);  //// witout init - sega
  char str[] = "(234.45)+0-0/0*0^2sincostanatanacosasinsqrtlnlog";

  int er = validator(str);
  er = parcer(input_stack, str) || er;

  if (er)
    printf("ERROR: Invalid exptession!\n--------------------------\n");
  else
    printf("Infix expression:\n%s\n", str);

  // input_stack = push_stack(2.0, 1, 1, input_stack);
  // input_stack = push_stack(3.0, 1, 1, input_stack);
  // input_stack = push_stack(4.0, 1, 1, input_stack);
  // input_stack = pop_stack(input_stack);

  if (input_stack) {
    List* p = input_stack;
    printf("Input stack\n");
    while (p) {
      printf("value: %10f| priority: %3d| type: %3d\n", p->value, p->priority,
             p->value_type);
      p = p->next;
    }
    destroy_stack(input_stack);
  }
  return 0;
}