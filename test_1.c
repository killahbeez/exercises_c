#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

void chg(char* str);
int main(int argc, char *argv[])
{
	char *test = (char*) malloc(20);
	strcpy(test,"muie");
	printf("%s\n",test);
	printf("%p\n",test);
	printf("%p\n",&(*test));
	printf("%p\n",&test);
	chg(test);
	printf("%s\n",test);
	printf("%p\n",test);
	printf("%p\n",&test);
	free(test);
}

void chg(char *str){
	strcpy(str,"didi do dexter");
}


