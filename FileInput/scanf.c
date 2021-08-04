/*
 * scanf.c
 *
 *  Created on: Jul 14, 2021
 *      Author: alexclevenger
 */

#include <stdio.h>

int main(){

	char str[100];
	int i;
	double x;

	printf("Enter a numeric value and a string: ");
//notice the format specifier for a double
	scanf("%d %s %lf", &i, &str, &x);
	printf("\nYou entered the values %d %s %lf\n",i,str,x);

	return 0;
}

