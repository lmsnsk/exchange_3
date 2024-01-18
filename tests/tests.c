#include <check.h>

#include "../s21_smart_calc.h"

START_TEST(test_empty_str) {
  char str[] = "3.i";
  double result;
  char x[] = "3";
  int er = s21_smart_calc(str, &result, x);
  ck_assert_int_eq(er, 1);
}
END_TEST

START_TEST(test_incorrect) {
  char str[][100] = {
      "ln",     "(",   "acos",      "acot20",    "sos8",   "cis8",  "+",
      ")",      "mod", "99-",       "cos()",     "mod4",   "3 4",   " --- ",
      "-*",     "*-",  "3 4 .5 5.", "(3 +)",     " 4+++7", "3+.+3", "((457)",
      "3 ())4", "b.1", "3.i",       "2.4mod3.4", ""};
  double result;
  int i = 0;
  do {
    char x[] = "3";
    int er = s21_smart_calc(str[i], &result, x);
    ck_assert_int_eq(er, 1);
  } while (!str[i++][0]);
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
  char str[] = "nan * 5";
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

Suite *suite_create_matrix(void) {
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
  run_testcase(suite_create_matrix());

  return 0;
}