#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 0
#define ERROR 1
#define MAX_SIZE 256

typedef enum {
  NUMBER,
  O_BRACKET,
  C_BRACKET,
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

/// @brief разбивка строки на лексемы
/// @param str указатель на строку выражения
/// @return код ошибки (0 - выражение корректно, 1 - выражение некорректно)
int parcer(List** list, char* str);

/// @brief инициализация первого элемента стека
/// @param value числовое значение элемента
/// @param priority значение приоритета
/// @param value_type тип элемента
/// @return  указать на первый элемент стека
List* init_stack(double value, int priority, type_t value_type);

/// @brief добавление элемента в стек
/// @param value числовое значение элемента
/// @param priority значение приоритета
/// @param value_type тип элемента
/// @param root указать на первый элемент стека
void push_stack(double value, int priority, type_t value_type, List** root);

/// @brief удаление последнего элемента стека
/// @param root указать на первый элемент стека
/// @return указать на первый элемент стека
void pop_stack(List** root);

/// @brief получение последнего элемента стека
/// @param root указать на первый элемент стека
/// @return указать на последний элемент стека
List* peek_stack(List* root);

/// @brief очистка стека
/// @param root указать на первый элемент стека
void destroy_stack(List* root);