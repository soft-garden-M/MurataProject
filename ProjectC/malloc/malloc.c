/*
 * malloc.c
 *
 *  Created on: 2017/03/11
 *      Author: murata
 */


int main(void) {

	//int size = sizeof(int);
	//int size1;
	//void *malloc(int);

	int *a = malloc(sizeof(int));
	*a = 100;

	printf("%d",*a);
	free(a);
}
