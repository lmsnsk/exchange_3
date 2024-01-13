#include "s21_smart_calc.h"

int is_func(int val) {
  int result = 0;
  if (val == COS || val == SIN || val == TAN || val == ACOS || val == ASIN ||
      val == ATAN || val == SQRT || val == LOG || val == LN)
    result = 1;
  return result;
}

int is_binar_operator(int val) {
  int result = 0;
  if (val == PLUS || val == MINUS || val == MUL || val == SUB || val == MOD ||
      val == EXP)
    result = 1;
  return result;
}

void number_case(List *input, List **output, int *result) {
  if (input->next && input->next->value_type != C_BRACKET &&
      !is_binar_operator(input->next->value_type)) {
    *result = 1;
  } else {
    push_stack(input->value, input->priority, input->value_type, output);
  }
}

void open_bracket_case(List *input, List **support, int *result) {
  if (input->next &&
      (input->next->value_type == MUL || input->next->value_type == SUB ||
       input->next->value_type == EXP || input->next->value_type == MOD ||
       input->next->value_type == C_BRACKET)) {
    *result = 1;
  } else {
    push_stack(input->value, input->priority, input->value_type, support);
  }
}

void close_bracket_case(List *input, List **support, List **output,
                        int *result) {
  if (input->next &&
      (is_func(input->next->value_type) || input->next->value_type == NUMBER)) {
    *result = 1;
  } else {
    List *p = {0};
    p = peek_stack(*support);
    while (p && p->value_type != O_BRACKET) {
      push_stack(p->value, p->priority, p->value_type, output);
      pop_stack(support);
      p = peek_stack(*support);
    }
    pop_stack(support);
  }
}

int to_reverse_polish_notation(List *input, List **output) {
  int check_negative_func = 0;
  int result = 0;
  List *support = {0}, *p = {0};
  while (input) {
    switch (input->value_type) {
      case NUMBER:
        number_case(input, output, &result);
        check_negative_func = 0;
        break;
      case O_BRACKET:
        open_bracket_case(input, &support, &result);
        check_negative_func = 0;
        break;
      case C_BRACKET:
        close_bracket_case(input, &support, output, &result);
        break;
      default:
        p = peek_stack(support);
        if (p && p->priority == 5 && is_func(input->value_type))
          check_negative_func = 1;
        else
          check_negative_func = 0;
        while (!check_negative_func && p && p->priority >= input->priority) {
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