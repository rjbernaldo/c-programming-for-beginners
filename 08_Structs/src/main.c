#include <stdio.h>
#include <string.h>

#define NUMBER_OF_CDS 1

struct cd {
  char name[50];
  char artist[50];
  int trackcount;
  int rating;
};

struct cd cd_collection[NUMBER_OF_CDS];

void create_cd_collection() {
  strcpy(cd_collection[0].name, "Name");
  strcpy(cd_collection[0].artist, "Artist");
  cd_collection[0].trackcount = 1;
  cd_collection[0].rating = 10;
}

void display_cd_collection() {
  int i;
  struct cd thiscd;
  for (i = 0; i < NUMBER_OF_CDS; i++) {
    thiscd = cd_collection[i];
    printf("CD #%d: %s - %s - %d - %d", i, thiscd.name, thiscd.artist, thiscd.trackcount, thiscd.rating);
  }
}

int main() {
  create_cd_collection();
  display_cd_collection();
}