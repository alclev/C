/*
 * main.c
 *
 *  Created on: Jul 27, 2021
 *      Author: alexclevenger
 */


#include <stdio.h>

int main(){

	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};
	//can specify integer value if necessary

	enum Company value1, value2, value3;

	value1 = XEROX;
	value2 = GOOGLE;
	value3 = EBAY;

	printf("Value 1: %d\nValue 2: %d\nValue 3: %d\n", value1, value2, value3);

	return 0;
}
