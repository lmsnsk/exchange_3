#include "s21_smart_calc.h"

void plot() {
  List* input_stack = {0};
  List* output_stack = {0};

  char str[] = "2+x";
  int er = validator(str);
  if (!er) er = parcer(&input_stack, str);
  if (!er) er = to_reverse_polish_notation(input_stack, &output_stack);

  for (int i = 0; i < 100; i++) {
    List* numbers = {0};
    if (!er) {
      char x_str[10];
      sprintf(x_str, "%e", (double)i);
      er = calculation(output_stack, &numbers, x_str);
      // if (!er) result = numbers->value;
    }
    if (numbers) destroy_stack(numbers);
  }

  if (input_stack) destroy_stack(input_stack);
  if (output_stack) destroy_stack(output_stack);
}