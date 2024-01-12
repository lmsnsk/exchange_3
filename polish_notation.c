#include "s21_smart_calc.h"

int to_reverse_polish_notation(List *input, List **output) {
  int result = 0;
  List *p = {0};
  List *support = {0};
  int i = 0;
  while (input) {
    if (input->value_type == NUMBER) {
      push_stack(input->value, input->priority, input->value_type, output);

    } else if (input->value_type == O_BRACKET) {
      push_stack(input->value, input->priority, input->value_type, &support);

    } else if (input->value_type == C_BRACKET) {
      while ((peek_stack(support))->value_type != O_BRACKET) {
        p = peek_stack(support);
        push_stack(p->value, p->priority, p->value_type, output);
        pop_stack(&support);
      }
      pop_stack(&support);

    } else {
      p = peek_stack(support);
      while (p && p->priority >= input->priority) {
        push_stack(p->value, p->priority, p->value_type, output);
        pop_stack(&support);
        p = peek_stack(support);
      }
      push_stack(input->value, input->priority, input->value_type, &support);
    }
    input = input->next;
    i++;
  }
  while ((peek_stack(support))) {
    p = peek_stack(support);
    push_stack(p->value, p->priority, p->value_type, output);
    pop_stack(&support);
  }
  return result;
}