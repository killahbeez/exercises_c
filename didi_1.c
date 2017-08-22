#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	char *didi = (char *) malloc(10);
	printf("%p\n",didi);
	strcpy(didi,"muie");
	printf("%s\n",didi);
	printf("%p\n",didi);
	strcpy(didi,"muiesasa");
	*(didi+1) = 'H';
	printf("%s\n",didi);
	printf("%p\n",didi);
	free(didi);
}
