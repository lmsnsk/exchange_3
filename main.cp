#include "s21_smart_calc.h"

int main(void) {
  double result = 0;
  char str[] = "2+2";
  // char str[] = "(234.45)+0-0/0*0^2sincostanatanacosasinsqrtlnlog";

  int er = s21_smart_calc(str, &result);

  if (er) {
    printf("ERROR: Invalid expression!\n");
    printf("--------------------------\n");
  } else {
    printf("Infix expression:\n%s\n", str);
    printf("%f\n", result);
  }
  return 0;
}

void print_stack(List* stack) {
  List* p = stack;
  while (p) {
    printf("value: %10f| priority: %3d| type: %3d\n", p->value, p->priority,
           p->value_type);
    p = p->next;
  }
}

void print_stack_str(List* stack) {
  List* p = stack;
  while (p) {
    if (p->value_type == NUMBER)
      printf("%g", p->value);
    else if (p->value_type == O_BRACKET)
      printf("(");
    else if (p->value_type == C_BRACKET)
      printf(")");
    else if (p->value_type == PLUS)
      printf("+");
    else if (p->value_type == MINUS)
      printf("-");
    else if (p->value_type == U_MINUS)
      printf("~");
    else if (p->value_type == MUL)
      printf("*");
    else if (p->value_type == SUB)
      printf("/");
    else if (p->value_type == EXP)
      printf("^");
    else if (p->value_type == MOD)
      printf("mod");
    else if (p->value_type == COS)
      printf("cos");
    else if (p->value_type == SIN)
      printf("sin");
    else if (p->value_type == TAN)
      printf("tan");
    else if (p->value_type == ACOS)
      printf("acos");
    else if (p->value_type == ASIN)
      printf("asin");
    else if (p->value_type == ATAN)
      printf("atan");
    else if (p->value_type == SQRT)
      printf("sqrt");
    else if (p->value_type == LOG)
      printf("log");
    else if (p->value_type == LN)
      printf("ln");
    printf(" ");
    p = p->next;
  }
  printf("\n");
}