/*
 * main.c
 *
 *  Created on: Jul 27, 2021
 *      Author: alexclevenger
 */

#include <stdio.h>

int main() {

	//%zd format specifier or %u

	printf(
			"Size of int: %zd bytes\nSize of char: %zd bytes\n"
			"Size of long: %zd bytes\nSize of long long: %zd bytes\n"
			"Size of double: %zd bytes\nSize of long double: %zd bytes\n",
			sizeof(int), sizeof(char), sizeof(long), sizeof(long long),
			sizeof(double), sizeof(long double));

	return 0;
}
