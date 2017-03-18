/*
 * kensyu2.c
 *
 *  Created on: 2017/03/04
 *      Author: murata
 */

#ifndef KENSYU2_C_
#define KENSYU2_C_



#endif /* KENSYU2_C_ */

int main(void) {
	int count = 0;
	count = bekijo(3,1);
	printf("%d",count);

}

int bekijo(int kisuu,int sisuu){
	int count = kisuu;
	int i = 1;
	for (i;i < sisuu;i++){
		count = kisuu * count;
	}
	return count;
}

