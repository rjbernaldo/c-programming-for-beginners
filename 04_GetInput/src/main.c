#include <stdio.h>

void get_input_with_fgets() {
  char firstname[5];
  char lastname[5];

  printf("Enter your firstname: ");
  fgets(firstname, 5, stdin);

  printf("Enter your lastname: ");
  fgets(lastname, 5, stdin);

  printf("Hello, %s, %s\n", firstname, lastname);
}

int main() {
  get_input_with_fgets();
}