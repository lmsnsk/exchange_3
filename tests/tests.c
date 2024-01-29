#include <check.h>

#include "../s21_smart_calc.h"

START_TEST(test_empty_str) {
  char str[] = "";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, -1);
}
END_TEST

START_TEST(test_incorrect) {
  char str[][15] = {"ln",     "()",        "(2+2)8", ".+",        "art18",
                    "5+lig7", "(*)",       "acos",   "acot20",    "sos8",
                    "cis8",   "+",         ")",      "mod",       "99-",
                    "cos()",  "cos*17",    "mod4",   "4v",        "3 4",
                    " --- ",  "-*",        "*-",     "3 4 .5 5.", "(3 +)",
                    " 4+++7", "3+.+3",     "((457)", "3 ())4",    "b.1",
                    "3.i",    "2.4mod3.4", ""};
  double result;
  int i = 0;
  char x[] = "3";
  while (str[i][0]) {
    int er = s21_smart_calc(str[i], &result, x);
    ck_assert_int_eq(er, 1);
    i++;
  };
}
END_TEST

START_TEST(test_test_1) {
  char str[] = "(2+2)-1*4/3";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(result, 2.666666667, 1e-07);
}
END_TEST

START_TEST(test_test_2) {
  char str[] = "-1 + cos1 + sin2 + tan4 + atan7 + acos0.5 + asin0.7 + sqrt4";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(result, 6.858915335, 1e-07);
}
END_TEST

START_TEST(test_test_3) {
  char str[] = "-log5*ln7+2^4";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(result, 14.63986717, 1e-07);
}
END_TEST

START_TEST(test_test_4) {
  char str[] = "10mod5";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(result, 0, 1e-07);
}
END_TEST

START_TEST(test_test_5) {
  char str[] = "inf * 5";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, 0);
  ck_assert_double_infinite(result);
}
END_TEST

START_TEST(test_test_6) {
  char str[] = "nan * 5+nan-1";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, 0);
  ck_assert_double_nan(result);
}
END_TEST

START_TEST(test_test_7) {
  char str[] = "x * 5";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(result, 15.0, 1e-07);
}
END_TEST

START_TEST(test_test_8) {
  char str[] = "2cos30";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(result, 0.3085028998, 1e-07);
}
END_TEST

START_TEST(test_test_credit_1) {
  int type = 1;
  double amount = 2500000;
  double time = 120;
  double rate_percent = 10;
  double pay, overpay, total_pay, first_pay;
  credit_calc(amount, rate_percent, time, type, &pay, &total_pay, &overpay,
              &first_pay);
  ck_assert_double_eq_tol(pay, 33037.68, 1);
  ck_assert_double_eq_tol(first_pay, 33037.68, 1);
  ck_assert_double_eq_tol(total_pay, 3964521.60, 1);
  ck_assert_double_eq_tol(overpay, 1464521.60, 1);
}
END_TEST

START_TEST(test_test_credit_2) {
  int type = 2;
  double amount = 2500000;
  double time = 120;
  double rate_percent = 10;
  double pay, overpay, total_pay, first_pay;
  credit_calc(amount, rate_percent, time, type, &pay, &total_pay, &overpay,
              &first_pay);
  ck_assert_double_eq_tol(pay, 21006.94, 1e-2);
  ck_assert_double_eq_tol(first_pay, 41666.67, 1e-2);
  ck_assert_double_eq_tol(total_pay, 3760416.67, 1e-2);
  ck_assert_double_eq_tol(overpay, 1260416.67, 1e-2);
}
END_TEST

START_TEST(test_test_deposit_1) {
  double deposit = 1000000;
  int term = 12;
  double rate = 8.5;
  double nalog_rate = 10;
  int payout = 12;
  Change plus = {50000, 1};
  Change minus = {20000, 1};
  double percent, nalog, result;
  int capitalization = 0;
  int er = deposit_calc(deposit, term, rate, nalog_rate, payout, capitalization,
                        plus, minus, &percent, &nalog, &result);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(percent, 96687.50, 1);
  ck_assert_double_eq_tol(result, 1426687.50, 1);
  ck_assert_double_eq_tol(nalog, 0, 1);
}
END_TEST

START_TEST(test_test_deposit_2) {
  double deposit = 1000000;
  int term = 12;
  double rate = 8.5;
  double nalog_rate = 10;
  int payout = 1;
  int capitalization = 1;
  Change plus = {50000, 3};
  Change minus = {20000, 3};
  double percent, nalog, result;
  int er = deposit_calc(deposit, term, rate, nalog_rate, payout, capitalization,
                        plus, minus, &percent, &nalog, &result);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(percent, 91637.82, 1);
  ck_assert_double_eq_tol(result, 1181637.82, 1);
  ck_assert_double_eq_tol(nalog, 0, 1);
}
END_TEST

START_TEST(test_test_deposit_3) {
  double deposit = 0;
  int term = 12;
  double rate = 8.5;
  double nalog_rate = 10;
  int payout = 1;
  int capitalization = 1;
  Change plus = {50000, 3};
  Change minus = {20000, 3};
  double percent, nalog, result;
  int er = deposit_calc(deposit, term, rate, nalog_rate, payout, capitalization,
                        plus, minus, &percent, &nalog, &result);
  ck_assert_int_eq(er, 1);
}
END_TEST

START_TEST(test_test_deposit_4) {
  double deposit = 1000000;
  int term = 12;
  double rate = 8.5;
  double nalog_rate = 10;
  int payout = 3;
  int capitalization = 1;
  Change plus = {50000, 6};
  Change minus = {20000, 6};
  double percent, nalog, result;
  int er = deposit_calc(deposit, term, rate, nalog_rate, payout, capitalization,
                        plus, minus, &percent, &nalog, &result);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(percent, 88385.46, 1);
  ck_assert_double_eq_tol(result, 1118385.46, 1);
  ck_assert_double_eq_tol(nalog, 0, 1);
}
END_TEST

START_TEST(test_test_deposit_5) {
  double deposit = 1000000;
  int term = 36;
  double rate = 8.5;
  double nalog_rate = 10;
  int payout = 6;
  int capitalization = 1;
  Change plus = {50000, 12};
  Change minus = {20000, 12};
  double percent, nalog, result;
  int er = deposit_calc(deposit, term, rate, nalog_rate, payout, capitalization,
                        plus, minus, &percent, &nalog, &result);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(percent, 288943.70, 1);
  ck_assert_double_eq_tol(result, 1348943.70, 1);
  ck_assert_double_eq_tol(nalog, 1993.06, 1);
}
END_TEST

START_TEST(test_test_deposit_6) {
  double deposit = 1000000;
  int term = 15;
  double rate = 15;
  double nalog_rate = 5;
  int payout = 12;
  int capitalization = 1;
  Change plus = {0, 0};
  Change minus = {0, 0};
  double percent, nalog, result;
  int er = deposit_calc(deposit, term, rate, nalog_rate, payout, capitalization,
                        plus, minus, &percent, &nalog, &result);
  ck_assert_int_eq(er, 0);
  ck_assert_double_eq_tol(percent, 322500.00, 1);
  ck_assert_double_eq_tol(result, 1322500.00, 1);
  ck_assert_double_eq_tol(nalog, 28925.00, 1);
}
END_TEST

START_TEST(test_test_deposit_7) {
  double deposit = 1000000;
  int term = 15;
  double rate = 15;
  double nalog_rate = 5;
  int payout = 12;
  int capitalization = 1;
  Change plus = {0, 0};
  Change minus = {2000000, 1};
  double percent, nalog, result;
  int er = deposit_calc(deposit, term, rate, nalog_rate, payout, capitalization,
                        plus, minus, &percent, &nalog, &result);
  ck_assert_int_eq(er, 1);
}
END_TEST

Suite *suite_calc(void) {
  Suite *s = suite_create("suite_calc");
  TCase *tc = tcase_create("case_calc");

  tcase_add_test(tc, test_empty_str);
  tcase_add_test(tc, test_incorrect);
  tcase_add_test(tc, test_test_1);
  tcase_add_test(tc, test_test_2);
  tcase_add_test(tc, test_test_3);
  tcase_add_test(tc, test_test_4);
  tcase_add_test(tc, test_test_5);
  tcase_add_test(tc, test_test_6);
  tcase_add_test(tc, test_test_7);
  tcase_add_test(tc, test_test_8);
  tcase_add_test(tc, test_test_credit_1);
  tcase_add_test(tc, test_test_credit_2);
  tcase_add_test(tc, test_test_deposit_1);
  tcase_add_test(tc, test_test_deposit_2);
  tcase_add_test(tc, test_test_deposit_3);
  tcase_add_test(tc, test_test_deposit_4);
  tcase_add_test(tc, test_test_deposit_5);
  tcase_add_test(tc, test_test_deposit_6);
  tcase_add_test(tc, test_test_deposit_7);

  suite_add_tcase(s, tc);
  return s;
}

void run_testcase(Suite *testcase) {
  printf("\n");
  SRunner *sr = srunner_create(testcase);

  srunner_set_fork_status(sr, CK_NOFORK);
  srunner_run_all(sr, CK_NORMAL);

  srunner_free(sr);
}

int main(void) {
  printf("===========================================\n");
  run_testcase(suite_calc());
  printf("\n===========================================\n\n");

  return 0;
}