#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

char *int2bin(uint32_t);

int main(int argc, char *argv[])
{
	char input[100];

	while(1){
		printf("Introdu numarul: ");
		fgets(input,sizeof(input),stdin);

		//remove newline and append \0
		if ((strlen(input)>0) && (input[strlen(input)-1] == '\n')){
			input[strlen(input)-1]='\0';
		}

		if(strcmp(input,"")==0) return -1;
		
		uint32_t number = atoi(input);
		char *bin = int2bin(number); 
		printf("Binary: %s\n\n",bin);
		free(bin);
	}
	return 0;
}

char *int2bin(uint32_t cnt){
	uint16_t bits = sizeof(uint32_t) * CHAR_BIT;
	char *binary = (char *) malloc(bits+1);

	uint8_t char_digit = 0;
	uint8_t spaces = 0;

	for(int i=0;i<bits;i++){
		if(i>0 && i%8 == 0){
			spaces++;
			binary = (char *) realloc(binary,bits + spaces + 1);
			*(binary + char_digit) = ' ';
			char_digit++;
		}
		*(binary + char_digit) = ((uint32_t)(cnt << i) >> (bits-1)) + '0';
		char_digit++;
	}

	*(binary+char_digit) = '\0';

	return binary;
}


