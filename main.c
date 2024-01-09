#include <stdio.h>
#include <string.h>

/// @brief удаление всех пробелов строки
/// @param str редактируемая строка
void delete_speces(char *str) {
  char *str_start_pointer = str;
  char temp_str[strlen(str) + 1];
  *temp_str = '\0';
  while (*str) {
    if (*str != ' ') {
      char str_current_char[2];
      str_current_char[0] = *str;
      str_current_char[1] = '\0';
      strcat(temp_str, str_current_char);
    }
    str++;
  }
  strcpy(str_start_pointer, temp_str);
}

/// @brief проверка выражения на корректность
/// @param str указатель на строку выражения
/// @return код ошибки (0 - выражение корректно, 1 - выражение некорректно)
int check_expression(char *str) {
  int error = 0, i = 0, bracket = 0;
  delete_speces(str);
  // size_t length = strlen(str);
  while (str[i]) {
    // if (str[i] == ' ') continue;
    if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' ||
        str[i] == '^') {
      if (str[i + 1] == '*' || str[i + 1] == '/' || str[i + 1] == '^') {
        error = 1;
        break;
      }
    }
    if (str[i] == '(') {
      bracket++;
    } else if (str[i] == ')') {
      if (bracket < 1) {
        error = 1;
        break;
      }
      bracket--;
    }
    i++;
  }
  if (bracket) error = 1;

  return error;
}

int main(void) {
  char str[] = "  5   + 2   ";
  delete_speces(str);
  printf("__%s__\n", str);
  return 0;
}