#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(){
	union {
		char a;
		uint32_t b;
	} un;
	un.b = 257;
	printf("%d\n",sizeof(un));
	struct {
		uint32_t b;
		char a;
	} str = {.a = 891, .b = 256};
	printf("%d\n",sizeof(str));
	printf("%d\n",str.a);
	printf("%d\n",str.b);
	return 0;
}
