#include <stdio.h>

enum suits {
  Hearts, Diamonds, Clubs, Spades, Lol = 500
};

void showcard(enum suits card) {
  if (card == Hearts || card == Diamonds) {
    printf("This card is red (in suit #%d).\n", card);
  } else {
    printf("This card is black (in suit #%d).\n", card);
  }
}

int main(int argc, char **argv) {
  enum suits playingcard;
  playingcard = 1000;
  showcard(playingcard);
}
