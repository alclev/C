/*
 * main.c
 *
 *  Created on: Jul 28, 2021
 *      Author: alexclevenger
 */

#include <stdio.h>

char board[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int turns = 0;
_Bool run = 1;
_Bool player = 0;
_Bool catch = 1;

void drawBoard();
void markBoard(int mark, _Bool player);
void checkForWin();
_Bool isOccupied(int space);
void win(char player);


int main() {

	printf("\tC Tic Tac Toe Game\n");
	printf("Player 1 (X)  -  Player 2 (O)\n");

	int mark = 0;

	do {

		drawBoard();
		checkForWin();
		catch = 1;

		if (run) {
			if(player == 0)
				printf("\n\nPlayer 1, enter a number: ");
			else
				printf("\n\nPlayer 2, enter a number: ");
			scanf("%i", &mark);
			if ((mark >= 1 && mark <= 9) && !isOccupied(mark)) {
				markBoard(mark, player);
				player = !player; //switch player
				
			} else {
				printf("Invalid Move.\n");
				continue;
			}
		}
		
	} while (run && turns < 9);

	if(run){ //if there was a draw
		printf("\nDraw ('.') \n\n");
	}

	return 0;

}

void drawBoard() {
	printf(
			"\t \t|\t \t|\n\t \t|\t \t|\n\t%c\t|\t%c\t|\t%c\n\t \t|\t \t|\n\t \t|\t \t|\n",
			board[0], board[1], board[2]);
	printf("----------------+---------------+----------------\n");
	printf(
			"\t \t|\t \t|\n\t \t|\t \t|\n\t%c\t|\t%c\t|\t%c\n\t \t|\t \t|\n\t \t|\t \t|\n",
			board[3], board[4], board[5]);
	printf("----------------+---------------+----------------\n");
	printf(
			"\t \t|\t \t|\n\t \t|\t \t|\n\t%c\t|\t%c\t|\t%c\n\t \t|\t \t|\n\t \t|\t \t|\n",
			board[6], board[7], board[8]);
}

void markBoard(int mark, _Bool player) {
	if(!player && catch){
		board[mark - 1] = 'X';
		turns ++;
		catch = 0;
}		
	if(player && catch){
		board[mark -1] = 'O';
		turns ++;
		catch = 0;
	}
	
	
}

void checkForWin() {

	for (int i = 0; i < 9; i += 3) {
		if (board[i] == board[i + 1] && board[i + 1] == board[i + 2]) {
			win(board[i]);
		}
	}
	for (int i = 0; i < 3; i++) {
		if (board[i] == board[i + 3] && board[i + 3] == board[i + 6]) {
			win(board[i]);
		}
	}
	if (board[0] == board[4] && board[4] == board[8]) {
		win(board[0]);
	}
	if (board[2] == board[4] && board[4] == board[6]) {
		win(board[2]);
	}

}
void win(char player) {
	if (player == 'X') {
		printf("Player 1 won!! Horray!!\n");
		run = 0;
	} else {
		printf("Player 2 won. Congrats (-_-) \n");
		run = 0;
	}
}
_Bool isOccupied(int space) {
	if (board[space - 1] == 'X' || board[space - 1] == 'O') {
		return 1;
	} else
		return 0;
}

