/*
 * point.c
 *
 *  Created on: 2017/03/04
 *      Author: murata
 */


int main(void) {
	int *ptr;
	int a;
	ptr = &a;
	a=100;
	printf("%d\r\n",*ptr);
	*ptr = 5;
	printf("%d\r\n",a);
}
