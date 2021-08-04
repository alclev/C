/*
 * main.c
 *
 *  Created on: Jul 28, 2021
 *      Author: alexclevenger
 */

#include <stdio.h>

int main() {
	//finds the primes from 3-100
	int primes[100];
	primes[0] = 2;
	primes[1] = 3;
	int index = 1;
	_Bool isPrime = 1;

	for (int i = 5; i < 100; i++) { //or could simply do i += 2
		if (i % 2 == 0)
			continue;
		else {
			for (int k = 0; i / primes[k] >= primes[k] && isPrime; k++) {
				if (i % primes[k] == 0)
					isPrime = 0;
			}
			if (isPrime)
				primes[++index] = i;

		}
		isPrime = 1;
	}
	for (int j = 0; j < index + 1; j++) {
		printf("Index %i> %i\n", j, primes[j]);
	}
	return 0;
}
