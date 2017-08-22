#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "didi.h"

int main(int argc, char *argv[]){
	uint32_t i = 1023;

	if(argc == 2){
		i = (uint32_t) atoi(argv[1]);
	}
	uint8_t *p = (uint8_t *)&i;

	printf("Address %p\n",&i);
	printf("Integer %08x\n",i);
	printf("  Little endian\n");
	for(uint8_t a=0;a<sizeof(i);a++){
		printf("\tAddress %d (%p)\tValue: %02x\n",a,(p+a),*(p+a));
	}
	printf("\n");

	return 0;
}
