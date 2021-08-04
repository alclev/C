/*
 * main.c
 *
 *  Created on: Jul 28, 2021
 *      Author: alexclevenger
 */

#include <stdio.h>

int main() {

	enum Weekday {
		Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
	};
	enum Weekday today = Friday;

	switch (today) {

		case Sunday:
			printf("Today is Sunday.");
			break;
		case Monday:
			printf("Today is Monday.");
			break;
		case Tuesday:
			printf("Today is Tuesday.");
			break;
		case Wednesday:
			printf("Today is Wednesday.");
			break;
		case Thursday:
			printf("Today is Thursday."); //etc
			break;
		default:
			printf("whatever is left");
			break;
	}
	return 0;
}
