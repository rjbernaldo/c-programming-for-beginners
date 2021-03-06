#include <stdio.h>
#include <string.h>

#define NUMBER_OF_CDS 1

typedef struct cd CD;
typedef char Str50[50];

struct cd {
  Str50 name[50];
  Str50 artist[50];
  int trackcount;
  int rating;
};

CD cd_collection[NUMBER_OF_CDS];

void create_cd_collection() {
  strcpy(cd_collection[0].name, "Name");
  strcpy(cd_collection[0].artist, "Artist");
  cd_collection[0].trackcount = 1;
  cd_collection[0].rating = 10;
}

void display_cd_collection() {
  int i;
  CD thiscd;
  for (i = 0; i < NUMBER_OF_CDS; i++) {
    thiscd = cd_collection[i];
    printf("CD #%d: %s - %s - %d - %d", i, thiscd.name, thiscd.artist, thiscd.trackcount, thiscd.rating);
  }
}

int main() {
  create_cd_collection();
  display_cd_collection();
}