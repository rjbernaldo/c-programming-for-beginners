#include <stdio.h>

void addnumbers() {
  static int x = 0;
  int y = 0;
  x++;
  y++;
  printf("In addnumbers() x=%d, y=%d\n", x, y);
}

int main(int argc, char **argv) {
  addnumbers();
  addnumbers();
  addnumbers();
}
