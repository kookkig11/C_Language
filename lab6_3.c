#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(char board[BOARD_SIZE][BOARD_SIZE], int x, int y) {
  int i, j, n;
    for (i = y - 1, n = 1; i >= 0; i--, n++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            if (j  == x - n || j == x  + n) {
                board[i][j] = 'X';
            }
        }
    }
    for (i = y + 1, n = 1; i < BOARD_SIZE; i++, n++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            if (j  == x - n || j == x  + n) {
                board[i][j] = 'X';
            }
        }
    }
}

int main() {
  int i,j, posX, posY;
  // Declare array 2D using BOARD_SIZE
  char board[BOARD_SIZE][BOARD_SIZE];
  for (i = 0 ; i < BOARD_SIZE; i++) {
    for (j = 0 ; j < BOARD_SIZE; j++) {
        board[i][j] = ' ';
    }
  }

  printf("Enter Bishop's X Y position: ");
  scanf("%d %d", &posX, &posY);

  // Call function bishopMoves()
  bishopMoves(board, posX, posY);

  printf("  0 1 2 3 4 5 6 7\n");
  printf("------------------\n");
  for (i = 0; i < BOARD_SIZE; i++) {
      printf("%d", i);
      for (j = 0 ; j < BOARD_SIZE; j++) {
         printf("|");
         if (i == posY && j == posX) printf("B");
         else printf("%c", board[i][j]);
      }
      printf("|\n");
      printf("-----------------\n");
  }
}