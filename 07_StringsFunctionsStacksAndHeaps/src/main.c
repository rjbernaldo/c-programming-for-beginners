#include <stdio.h>

#define MAXSTRLEN 100

char greeting[MAXSTRLEN];

char * string_function_dynamic(char *astring) {
  char *s;
  s = malloc(MAXSTRLEN);
  s[0] = 0; // initialize buffer created by malloc
  strcat(s, "hello ");
  strcat(s, astring);
  strcat(s, "\n");
  return s;
}

char * string_function(char astring[]) {
  strcat(greeting, "hello ");
  strcat(greeting, astring);
  strcat(greeting, "\n");
  return greeting;
}

int main() {
  printf(string_function("Fred"));
  printf(string_function_dynamic("Mary"));
  return 0;
}