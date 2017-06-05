#include <stdio.h>

int main(int argc, char **argv) {
  char str1[] = "Hello";
  char *str2 = "World";

  printf("%x %x %s\n", &str1, str1, str1);
  printf("%x %x %s\n", &str2, str2, str2);

  return 0;
}
