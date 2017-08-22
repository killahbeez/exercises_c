#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <time.h> 
#include <sys/times.h> 
#include <math.h> 
#include <stdint.h> 

const char *progress = "-\\|/";
void delay(int);

int main(int argc, char **argv)
{
	uint32_t i;
	printf("%.0f\n",pow(2,32));
	printf("Initializing array [-]");

	while(1){
		printf("%c%c%c]",8,8,progress[i % 4]);
		fflush(stdout);
		i++;
		if(i == pow(2,32)-1) i = 0;
		delay(1000);
	}
}

void delay(int milliseconds)
{
	long pause;
	clock_t now,then;

	pause = milliseconds*(CLOCKS_PER_SEC/1000);
	now = then = clock();
	while( (now-then) < pause ){
		now = clock();
	}
}

