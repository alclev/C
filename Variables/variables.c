/*
 * variables.c
 *
 *  Created on: Jul 14, 2021
 *      Author: alexclevenger
 */


#include <stdio.h>
#include <stdbool.h>
// ^ can use standard true and false

int main() {
	enum gender {male, female};

	enum gender myGender;

	myGender = male;

	enum gender anotherGender = female;

	bool isMale = (myGender == anotherGender);

	if(isMale == 0){
		printf("False");
	}

	printf("%u", isMale);

	char myCharacter = '\n';
	printf("%c", myCharacter);

	return 0;
}
