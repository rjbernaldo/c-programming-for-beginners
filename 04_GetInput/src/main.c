#include <stdio.h>

int read_line(char s[], int maxlen) {
  char ch;
  int i;
  int chars_remain;

  i = 0;
  chars_remain = 1;

  while (chars_remain) {
    ch = getchar();
    if ((ch == '\n') || (ch == EOF)) {
      chars_remain = 0;
    } else if (i < maxlen - 1) {
      s[i] = ch;
      i++;
    }
  }

  s[i] = '\0';
  return i;
}

void get_input_with_fgets() {
  char firstname[5];
  char lastname[5];

  printf("Enter your firstname: ");
  read_line(firstname, 5);

  printf("Enter your lastname: ");
  read_line(lastname, 5);

  printf("Hello, %s, %s\n", firstname, lastname);
}

int main() {
  get_input_with_fgets();
}