#include <stdio.h>
#include <stdint.h>

int main(){
	int8_t ary_range[10] = { [0 ... 4]=1, [5 ... 8]=2, [9]=3 };
	for(int i=0;i<sizeof(ary_range)/sizeof(int8_t);i++){
		printf("[%d]:\t%d\n",i,*(ary_range+i));
	}
	return 0;
}
