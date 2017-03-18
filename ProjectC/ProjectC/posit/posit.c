/*
 * posit.c
 *
 *  Created on: 2017/03/04
 *      Author: murata
 */

typedef struct{
	int x;
	int y;
}Posit;


int main(void) {
	Posit posit;
	posit.x = 10;
	printf("%d",posit.x);
}

