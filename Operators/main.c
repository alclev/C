/*
 * main.c
 *
 *  Created on: Jul 27, 2021
 *      Author: alexclevenger
 */

#include <stdio.h>

int main(){

	unsigned int a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100
	unsigned int b = 13; // 0000 0000 0000 0000 0000 0000 0000 1101
	int result = 0;

	result = a >> 4;
	//a & b = 0000 1100
	//a | b = 0011 1101
//with shifts can end up losing bits

	printf("The result is %d\n", result);
	return 0;
}
