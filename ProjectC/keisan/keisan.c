/*
 * keisan.c
 *
 *  Created on: 2017/03/18
 *      Author: murata
 */


int main(void){
    #define ADD 0
    #define SUB  1
    #define MUL  2
    #define DIVI  3

	int kei;

	int a;
	a = 8;
	int b;
	b = 4;
	int c;

	//足し算
	c = keisan(a,b,ADD);
	printf("足し算%d\r\n",c);

	//引き算
	c = keisan(a,b,SUB);
	printf("引き算%d\r\n",c);

	//掛け算
	c = keisan(a,b,MUL);
	printf("掛け算%d\r\n",c);

	//割り算
	c = keisan(a,b,DIVI);
	printf("割り算%d\r\n",c);


}


int keisan(int suuji1,int suuji2, int kei){
	int kekka;
	switch (kei) {
	case 0:
	    kekka = suuji1 + suuji2;
	    break;
	case 1:
	    kekka = suuji1 - suuji2;
	    break;
	case 2:
	    kekka = suuji1 * suuji2;
	    break;
	case 3:
	    kekka = suuji1 / suuji2;
	    break;
	}

	return kekka;

}
