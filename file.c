#include <stdio.h>
#include <string.h>

int main(){
	char didi[30];
	strcpy(didi , "sasasa");
	printf("%s\n",didi);
	printf("%p\n",didi);
	strcpy(didi, "didi");
	printf("%s\n",didi);
	printf("%p\n",didi);
	*didi = 'c';
	printf("%s\n",didi);
}
