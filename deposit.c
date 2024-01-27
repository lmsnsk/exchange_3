#include "s21_smart_calc.h"

void deposit_calc(double deposit, int term, double rate, double nalog_rate,
                  Cap payout, int capitalization, double *plus, double *minus,
                  double *percent, double *nalog, double *result) {
  if (!deposit || !term) return;
  int i = 0;
  double rate_m = rate / 12.0 / 100;
  *result = deposit;
  while (i < term && capitalization) {
    if (!(i % payout)) *result += *result * rate_m * payout;
    i++;
  }
  if (!capitalization) *result += deposit * rate_m * term;
  *percent = *result - deposit;
  if (*percent * YEAR / (term > YEAR ? term : YEAR) >
      1000000.0 * nalog_rate / 100) {
    *nalog = (*percent - (1000000.0 * nalog_rate / 100)) * 0.13;
  }
}

#include <stdio.h>

int main(void) {
  double result = 0, percent = 0, nalog = 0;
  double deposit = 1100000;
  double term = 24;
  double rate = 15;
  double nalog_rate = 16;
  Cap payout = MONTH;
  int capitalization = 1;
  double plus[] = {10, 20, 30};
  double minus[] = {10, 20, 30};
  deposit_calc(deposit, term, rate, nalog_rate, payout, capitalization, plus,
               minus, &percent, &nalog, &result);
  printf("capitalization: ");
  capitalization ? printf("YES\n") : printf("NO\n");
  printf("nalog:  \t%.2f\n", nalog);
  printf("percent:\t%.2f\n", percent);
  printf("result: \t%.2f\n", result);
  return 0;
}