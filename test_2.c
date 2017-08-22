#include <stdio.h>
#include <string.h>

int main(){
	char str[] = "didi do dexter";
	printf("%s\n",str);
	printf("%p\n",str);
	strcpy(str,"muie");
	printf("%s\n",str);
	printf("%p\n",str);
}

