#define STATE_EXIT 0
#define STATE_MENU 1
#define STATE_GAME 2

#define HOUSE_TYPE_STRAIGHT 0
#define HOUSE_TYPE_NUMBERS  1

typedef struct _STRUCT_CENTER_CARD_DATA {
  int type;
  int cards[12];
  int owner;
} houseCards;

void onGameInit()
{
  int GAME_STATE = STATE_MENU;
  int GAME_DECK[52];
  int GAME_ROUND = 0;

  int PLAYER_CARDS[3][13];
  houseCards HOUSED_CARDS[16];

  while(GAME_STATE != STATE_EXIT)
  {
    if(GAME_STATE == STATE_MENU) displayMenu(GAME_STATE);
    if(GAME_STATE == STATE_GAME) displayGame(GAME_STATE, GAME_ROUND, GAME_DECK, HOUSED_CARDS);
  }
}

void displayMenu(int * state) {
  printf("1 - start");
  int c = -1;
  scanf("%d", &c);
  if(c == 1) *state = STATE_GAME;
}

void displayGame(int * state, int round, int deck[], houseCards housed[]) {
  if(round == 0) 
    initDeck(deck);
  
  
}
