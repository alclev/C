/*
 * main.c
 *
 *  Created on: Jul 28, 2021
 *      Author: alexclevenger
 */

#include <stdio.h>

int main() {

	int numTries = 0;
	int max = 5;
	int guess;
	int number = 12;
	printf("This is a guessing game\nI have chosen a number between 0 and "
			"20 which you must guess\n");

	while (numTries < max) {
		printf("You have %i tries left.\n", max - numTries);
		printf("Enter a guess: ");
		scanf("%i", &guess);
		if (guess == number) {
			printf("Correct!\n");
			break;
		}
		if (guess < number) {
			printf("Your guess is less than the number.\n");
			numTries++;
		}
		if (guess > number) {
			printf("Your guess is greater than the number.\n");
			numTries ++;
		}

	}

	return 0;
}
