#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(){
	uint16_t a[] = {500,600,700};
	char *ptr = (int)&a;
	uint16_t *ptr_1 = (int)&a;
	printf("%d\t%d\n",(int)*(ptr_1+1),(int)*(ptr+3));
	int b[] = {10,20};
	int *p = b;
	p[0] = 15;
	printf("p: %d\t&*p: %d\t&p: %d\t*p: %d",(int)p,(int)&*p,(int)&p,(int)*b);
	return 0;
}
