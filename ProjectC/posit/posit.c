/*
 * posit.c
 *
 *  Created on: 2017/03/04
 *      Author: murata
 */

#include "posit.h"
int main(void) {
	Posit a;
	Posit b;
	a.x = 1;
	a.y = 1;
	b.x = 7;
	b.y = 3;
	Posit tyutenx;

	Posit *c;
	Posit z;
	c = &z;


	tyutenx = tyuten(a,b,c);

	printf("%d",c->x);
	printf("%d",c->y);

}

Posit tyuten(Posit a,Posit b,Posit *c){
	Posit z;
	z.x = (a.x + b.x) / 2;
	z.y = (a.y + b.y) / 2;

	c->x = (a.x + b.x) / 2;
	c->y = (a.y + b.y) / 2;


	return z;

}
