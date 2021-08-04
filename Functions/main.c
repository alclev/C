/*
 * main.c
 *
 *  Created on: Jul 28, 2021
 *      Author: alexclevenger
 */

#include <stdio.h>

//Function prototypes
void mult(int x, int y);
//or could define before the main

int main(){
	mult(10,20);
	return 0;
}

void mult(int x, int y){
	int result = x * y;
	printf("The product of %d multiplied by %d is: %d\n", x, y, result);

}
