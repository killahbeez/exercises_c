#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <math.h> 
#include <stdint.h> 

typedef struct {
	char nr_start[256];
	uint32_t sum[10];
	uint8_t sizeof_sum;
	uint8_t cifra:4;
} num_t;

num_t calculateDest(char *number);

int main(int argc, char *argv[]){
	num_t num;
	char input[100];

	while(1){
		printf("Introdu numarul: ");
		fgets(input,100,stdin);

		//remove newline and append \0
		if ((strlen(input)>0) && (input[strlen(input)-1] == '\n')){
	        input[strlen(input)-1]='\0';
		}

		num = calculateDest(input);

		printf("Numar: %s\n",num.nr_start);
		for(int j=0;j<num.sizeof_sum;j++){
			printf("\tSuma %d: %d\n",j,num.sum[j]);
		}
		printf("Cifra destinului: %d\n",num.cifra);
		printf("_______________\n");
	}
	return 0;
}

num_t calculateDest(char *number){
	num_t num;

	strcpy(num.nr_start,number);

	num.sum[0] = 0;	
	for(int i = 0; i< strlen(num.nr_start);i++){
		num.sum[0] += (*(num.nr_start+i) - 48);	
	}
	num.sizeof_sum = 1;

	uint32_t suma = 0;
	uint32_t destin = num.sum[0];

	while(destin > 9){
		suma = destin;
		destin = 0;
		while(suma > 0){
			destin += suma % 10;
			suma /= 10;
		}
		num.sum[num.sizeof_sum] = destin;
		num.sizeof_sum++;
	}
	num.cifra = destin;

	return num;
}
