/*
 * posit.h
 *
 *  Created on: 2017/03/04
 *      Author: murata
 */

#ifndef POSIT_H_
#define POSIT_H_

typedef struct{
	int x;
	int y;
}Posit;
Posit tyuten(Posit a,Posit b,Posit *c);

#endif /* POSIT_H_ */
