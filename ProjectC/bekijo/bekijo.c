/*
 * bekijo.c
 *
 *  Created on: 2017/03/04
 *      Author: murata
 */


int main(void) {

	int kisuu = 2;
	int sisuu = 5;
	int count = 0;
	count = sum(kisuu,sisuu);
	printf("%d",count);
}

int sum(int kisuu,int sisuu){
	if(sisuu>0){
		printf("%d\r\n",sisuu);
		return kisuu * sum(kisuu,sisuu -1);

	}else{
		return 1;
	}
}
