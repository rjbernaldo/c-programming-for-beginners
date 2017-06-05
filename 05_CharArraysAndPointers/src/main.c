#include <stdio.h>

int main(int argc, char **argv) {
  char str1[] = "Hello";
  char *str2 = "World";

  // The value of an array name is the address of the start of that array
  printf("%x %x %s\n", &str1, str1, str1);

  // NOTE: The value of the pointer variable is not its own address
  // It's value points to where the value assigned to it begins
  printf("%x %x %s\n", &str2, str2, str2);

  // NOTE: You can point it to a different address
  str2 = &str1;
  printf("%x %x %s\n", &str2, str2, str2);

  // NOTE: An array name variable already points to an address
  str2 = str1;
  printf("%x %x %s\n", &str2, str2, str2);

  return 0;
}
