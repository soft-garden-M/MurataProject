/*
 ============================================================================
 Name        : ProjectC.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int begin = 10;
	int end = 10;
	int sum = 0;
	int maxValue = 0;
	int a[3];
	a[0] = 5;
	a[1] = 10;
	a[2] = 20;
	int max = 0;
	sum = count(begin,end);
	//printf("%d",sum);
	maxValue = intMax(16,10,20);
	//printf("%d",maxValue);
	int j = 0;
	for(j = 0;j <= 2;j++){

		if(a[j] >= max){
			max = a[j];
		}
	}
	printf("%d",max);
	return EXIT_SUCCESS;
}

int count(int begin,int end){
	int sum = 0;
	if (begin < end){
		for (begin;begin <= end ; begin++){
			sum = sum + begin;
		}
		return sum;
	}else{
		return -1;
	}
}
int intMax(int a,int b,int c){
	//bよりaが大きい
	if(a > b) {
		//cよりaが大きい
		if(a > c){
			return a;
		}else{
			return c;
		}
	}else if(b > c){
		return b;
	}else{
		return c;
	}
}

