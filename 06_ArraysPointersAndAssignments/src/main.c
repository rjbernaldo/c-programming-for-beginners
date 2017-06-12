#include <stdio.h>

int main() {
  char str1[] = "Hello";
  char *str2 = "Hello";
  char str3[6];

  str3[0] = 'H';
  str3[1] = 'e';
  str3[2] = 'l';
  str3[3] = 'l';
  str3[4] = 'o';
  str3[5] = '\0';

  printf("%d %s\n", str1, str1);
  printf("%d %s\n", str2, str2);
  printf("%d %s\n", str3, str3);

  printf("%d, %d, %d, %d, %d\n", &str3[0], &str3[1], &str3[2], &str3[3], &str3[4], &str3[5]);
  // NOTE: Adding 1 to an array name gives you the address of the next item in the array
  // because the array name IS the address of the array
  printf("%d, %d, %d, %d, %d\n", str3, str3+1, str3+2, str3+3, str3+4, str3+5);

  str2 = "Goodbye";
  printf("str2 = %s\n", str2);
}