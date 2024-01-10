#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 0
#define ERROR 1

typedef enum {
  NUMBER,
  BRACKET,
  PLUS,
  MINUS,
  MUL,
  SUB,
  EXP,
  MOD,
  COS,
  SIN,
  TAN,
  ACOS,
  ASIN,
  ATAN,
  SQRT,
  LN,
  LOG
} type_t;

typedef struct List {
  double value;
  int priority;
  type_t value_type;
  struct List* next;
} List;

/// @brief определяет, является ли символ числом
/// @param c передаваемый символ
/// @return 1 - символ является числом, 0 - символ не является числом
int is_number(int c);

/// @brief определяет, является ли символ арифметическим знаком
/// @param c передаваемый символ
/// @return 1 - символ является знаком, 0 - символ не является знаком
int is_arithmetic(int c);

/// @brief удаление всех пробелов строки
/// @param str редактируемая строка
/// @return код ошибки (0 - выражение корректно, 1 - выражение некорректно)
int delete_speces(char* str);

/// @brief проверка выражения на корректность
/// @param str указатель на строку выражения
/// @return код ошибки (0 - выражение корректно, 1 - выражение некорректно)
int validator(char* str);

List* init_stack(double value, int priority, type_t value_type);

List* push_stack(double value, int priority, type_t value_type, List* root);

List* pop_stack(List* root);

List* peek_stack(List* root);

void destroy_stack(List* root);