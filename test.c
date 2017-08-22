#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	fp = fopen(argv[1],"r");

	char buffer[20];
	int items = 0;

	if(fp != NULL){
		while(!feof(fp) && (items = fread(buffer,sizeof(char),19,fp)) > 0){
			buffer[items] = '\0';
			printf("%s",buffer);
		}
	}
}

