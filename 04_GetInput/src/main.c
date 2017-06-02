#include <stdio.h>
#include <string.h>

void flush_input() {
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF);
}

int read_line(char s[], int maxlen) {
  int len_s;

  fgets (s, maxlen, stdin);
  len_s = strlen(s);
  if (s[len_s - 1] == '\n') {
    s[len_s - 1] = '\0';
    len_s -= 1;
  }

  flush_input();
  return len_s;
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