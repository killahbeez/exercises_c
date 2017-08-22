#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int readln(char*,int);

int main(){
	while(1){
		char str[20];
		readln(str,20);
		if(strcmp(str,"") == 0) return 0;
		printf("%s\n",str);
	}
}


int readln(char s[],int maxlen){
	char ch;
	int i;
	int chars_remain;
	i=0;
	chars_remain = 1;
	while(chars_remain){
		ch = getchar();
		if((ch == '\n') || (ch == EOF)){
			chars_remain = 0;
		}
		else if (i < maxlen - 1){
			s[i] = ch;
			i++;
		}
	}

	s[i] = '\0';
	return i;
}
