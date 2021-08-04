/*
 * main.c
 *
 *  Created on: Jul 27, 2021
 *      Author: alexclevenger
 */
#include <stdio.h>

int main(int argc, char *argv[]){

	double width, height, perimeter, area;
	height = atoi(argv[1]);
	width = atoi(argv[2]);

	perimeter = width * 2 + height * 2;
	area = width * height;

	printf("Area: %.2f\nPerimeter: %.2f\n", area, perimeter);
	return 0;
}
