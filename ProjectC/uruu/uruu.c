/*
 * uruu.c
 *
 *  Created on: 2017/03/11
 *      Author: murata
 */


int main(void){
    int toshi = 2017;
    int uruu = 5;
    int c;
    char hantei[1];

    c = uruuhantei(toshi,uruu);
    if (c = 0){
    	printf("%d","うるう年です。");
    }else{
    	printf("うるう年です。%d","うるう年ではありません。");
    }

    printf("%d\n",hantei[0]);

}

int uruuhantei(int toshi,int uruu){
    int c = toshi % uruu;

	return c;

}

