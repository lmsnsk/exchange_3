#include "s21_smart_calc.h"

int main(void) {
  List* input_stack = {0};
  List* output_stack = {0};
  List* numbers = {0};
  char str[] = "-(2+25*(3)-)";
  // char str[] = "+(-cos-2 + 2*2 -10 mod 2*3)  -3 -(-cos(-300 * 3))";
  // char str[] = "(234.45)+0-0/0*0^2sincostanatanacosasinsqrtlnlog";

  int er = validator(str);
  if (!er) er = parcer(&input_stack, str);
  if (!er) er = to_reverse_polish_notation(input_stack, &output_stack);
  if (!er) er = calculation(output_stack, &numbers);

  if (er) {
    printf("ERROR: Invalid exptession!\n");
    printf("--------------------------\n");
  } else {
    printf("Infix expression:\n%s\n", str);

    // push_stack(2.0, 1, 1, &input_stack);
    // pop_stack(&input_stack);

    if (input_stack) {
      // printf("Input stack\n");
      // print_stack(input_stack);
      printf("\n");
      print_stack_str(input_stack);
    }
    if (output_stack) {
      //   printf("\n");
      //   printf("Output stack\n");
      //   print_stack(output_stack);
      printf("\n");
      print_stack_str(output_stack);
    }
    if (output_stack) {
      printf("\n");
      print_stack_str(numbers);
    }
  }
  if (input_stack) destroy_stack(input_stack);
  if (output_stack) destroy_stack(output_stack);
  if (numbers) destroy_stack(numbers);
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
