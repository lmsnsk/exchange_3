#include "../s21_smart_calc.h"

int main(void) {
  double result = 0;
  char str[] = "cos*";
  char x[] = "5.6";

  int er = s21_smart_calc(str, &result, x);

  printf("Infix expression:\n%s\n", str);
  if (er) {
    printf("ERROR: Invalid expression!\n");
  } else {
    printf("%f\n", result);
  }
  // plot();
  return 0;
}

// "ln",     "()",  "acos",      "acot20",    "sos8",   "cis8",  "+",
//       ")",      "mod", "99-",       "cos()",     "mod4",   "3 4",   " --- ",
//       "-*",     "*-",  "3 4 .5 5.", "(3 +)",     " 4+++7", "3+.+3", "((457)",
//       "3 ())4", "b.1", "3.i",       "2.4mod3.4"

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
    else if (p->value_type == NUM_X)
      printf("x");
    else if (p->value_type == NUM_NAN)
      printf("nan");
    else if (p->value_type == NUM_INF)
      printf("inf");
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
