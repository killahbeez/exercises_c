#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

void didilea(char *didi){
	printf("%d\n",didi[1]);
	didi[2] = 45;
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
}
