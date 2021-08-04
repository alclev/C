/*
 * main.c
 *
 *  Created on: Jul 27, 2021
 *      Author: alexclevenger
 */


#include <stdio.h>

int main(){

	int min;
	double days, years;

	printf("Enter the number of minutes: ");
	scanf("%d", &min);

	double minInYear = 24 * 60;
	days = (min / minInYear);
	years = days / 365;

	printf("\n%d Minutes = %f days\n", min, days);
	printf("%d Minutes = %f years\n", min, years);
	return 0;
}
