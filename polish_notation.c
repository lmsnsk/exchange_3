#include "s21_smart_calc.h"

int is_func(int val) {
  int result = 0;
  if (val == COS || val == SIN || val == TAN || val == ACOS || val == ASIN ||
      val == ATAN || val == SQRT || val == LOG || val == LN)
    result = 1;
  return result;
}

int to_reverse_polish_notation(List *input, List **output) {
  int check = 0;
  int result = 0;
  List *p = {0};
  List *support = {0};
  while (input) {
    switch (input->value_type) {
      case NUMBER:
        push_stack(input->value, input->priority, input->value_type, output);
        check = 0;
        break;
      case O_BRACKET:
        push_stack(input->value, input->priority, input->value_type, &support);
        check = 0;
        break;
      case C_BRACKET:
        p = peek_stack(support);
        while (p && p->value_type != O_BRACKET) {
          push_stack(p->value, p->priority, p->value_type, output);
          pop_stack(&support);
          p = peek_stack(support);
        }
        pop_stack(&support);
        break;
      default:
        p = peek_stack(support);
        if (p && p->priority == 5 && is_func(input->value_type))
          check = 1;
        else
          check = 0;
        while (!check && p && p->priority >= input->priority) {
          push_stack(p->value, p->priority, p->value_type, output);
          pop_stack(&support);
          p = peek_stack(support);
        }
        push_stack(input->value, input->priority, input->value_type, &support);
        break;
    }
    input = input->next;
  }
  while ((peek_stack(support))) {
    p = peek_stack(support);
    push_stack(p->value, p->priority, p->value_type, output);
    pop_stack(&support);
  }
  return result;
}