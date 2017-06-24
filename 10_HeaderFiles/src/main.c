#include <stdio.h>
#include "helloworld.h"

int main(int argc, char **argv) {
  char str[] = "test";
  int result = test(str);
  printf("%s: %d\n", str, result);
}