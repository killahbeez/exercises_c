#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

void didilea(char *didi){
	printf("%d\n",didi[1]);
	didi[2] = 45;
}

void dexter(uint8_t *ptr){
	*ptr = 66;
}

int main(int argc, char *argv[])
{
	//char didi[] = {1,2,3};
	char *didi = (char *)malloc(sizeof(char)*3);
	didi[0] = 1;
	didi[1] = 2;
	didi[2] = 3;
	printf("%p\n%p\n",didi,&didi);
	didilea(didi);
	printf("%d\n",didi[2]);
	free(didi);
	uint8_t a = 32;
	uint8_t *b = &a;
	dexter(b);
	printf("%p\n%p\n",b,&b);
	printf("%d\n%d",*b,a);
	char *str = "muie la dezinte";
	char *tmp = str;

	printf("\n_________\n");
	while(*str){
		printf("%c\n",*str);
		str++;
	}
	str = tmp;
	printf("%s\n",str);
}
