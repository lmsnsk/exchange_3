#include "s21_smart_calc.h"

void plot() {
  List* input_stack = {0};
  List* output_stack = {0};
  double* result = (double*)calloc(3, sizeof(double));

  if (result) {
    char str[] = "2+x";
    int er = validator(str);
    if (!er) er = parcer(&input_stack, str);
    if (!er) er = to_reverse_polish_notation(input_stack, &output_stack);

    for (int i = 0; i < 3; i++) {
      List* numbers = {0};
      if (!er) {
        char x_str[][10] = {"2", "3", "4"};
        er = calculation(output_stack, &numbers, x_str[i]);
        if (!er) result[i] = numbers->value;
      }
      if (numbers) destroy_stack(numbers);
    }
  }
  for (int i = 0; i < 3; i++) printf("%f\n", result[i]);
  free(result);

  if (input_stack) destroy_stack(input_stack);
  if (output_stack) destroy_stack(output_stack);
}