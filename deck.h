#define DECK_SIZE 52
#define STATUS_DRAWN    0
#define STATUS_EXISTS   1

void initCards(d[DECK_SIZE]) {
  for(int i = 0; i < DECK_SIZE; i++)
    d[i] = STATUS_EXISTS;
}

int removeCard(int d[DECK_SIZE], int card) {
  d[card] = STATUS_DRAWN;
  return card;
}

int drawCard(int d[DECK_SIZE]) {
  int rand_card = rand() % DECK_SIZE;
  return d[rand_card] == STATUS_EXISTS ? removeCard(d, rand_card) : drawCard(d);
}


