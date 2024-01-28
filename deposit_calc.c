#include "s21_smart_calc.h"

int deposit_calc(double deposit, int term, double rate, double nalog_rate,
                 int payout, int capitalization, Change *plus, Change *minus,
                 double *percent, double *nalog, double *result) {
  if (!deposit || !term) return EXIT_FAILURE;

  int i = 0;
  int error = EXIT_SUCCESS;
  *result = deposit;
  double rate_m = rate / 12.0 / 100;
  double plus_minus = 0;
  int count_plus = 0;
  int count_minus = 0;
  while (i < term) {
    if (capitalization) {
      if (!(i % payout)) *result += *result * rate_m * payout;
    }
    if (plus[count_plus].term == i) {
      *result += plus[count_plus].value;
      plus_minus += plus[count_plus].value;
      count_plus++;
    }
    if (minus[count_minus].term == i) {
      *result -= minus[count_minus].value;
      plus_minus -= minus[count_minus].value;
      count_minus++;
    }
    if (*result <= 0.0) {
      error = EXIT_FAILURE;
      break;
    }
    i++;
  }
  if (!capitalization) *result += *result * rate_m * term;
  *percent = *result - deposit - plus_minus;
  if (nalog_rate &&
      *percent * 12 / (term > 12 ? term : 12) > 1000000.0 * nalog_rate / 100) {
    *nalog = (*percent - (1000000.0 * nalog_rate / 100)) * 0.13;
  }
  return error;
}

// #include <stdio.h>

// int main(void) {
//   double result = 0, percent = 0, nalog = 0;
//   double deposit = 1000000;
//   double term = 12;
//   double rate = 10;
//   double nalog_rate = 16;
//   int payout = 3;
//   int capitalization = 1;
//   Change plus[128] = {0};
//   Change minus[128] = {0};
//   // Change plus[128] = {{333000.0, 2}};
//   // Change minus[128] = {{50000.0, 3}};
//   // Change plus[128] = {{100000.0, 2}, {200000.0, 5}, {300000.0, 10}};
//   // Change minus[128] = {{50000.0, 3}, {50000.0, 6}, {500000.0, 11}};
//   int er = deposit_calc(deposit, term, rate, nalog_rate, payout,
//   capitalization,
//                         plus, minus, &percent, &nalog, &result);
//   if (!er) {
//     printf("capitalization: ");
//     capitalization ? printf("YES\n") : printf("NO\n");
//     printf("nalog:  \t%.2f\n", nalog);
//     printf("percent:\t%.2f\n", percent);
//     printf("result: \t%.2f\n", result);
//     // printf("sdffsdfsdf: \t%.2f\n", plus[55].value);
//   } else
//     printf("Error\n");
//   return 0;
// }