#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int8_t plus_one(int8_t a){
    a++;
    return a;
}

int8_t multiple_two(int8_t a){
    a *= 2;
    return a;
}

int8_t modulo_two(int8_t a){
    a %= 2;
    return a;
}

int8_t modify(int8_t a, int8_t (*fun)(int8_t b)){
    int8_t res = fun(a);
    return res;
}

int main(int argc, char *argv[])
{
    int8_t cnt;
	cnt = (argc > 1) ? (int8_t)atoi(argv[1]) : 1;

    printf("%d ",cnt);
    cnt = modify(cnt,plus_one);
    printf("+ 1 = %d\n",cnt);

	printf("%d ",cnt);
	cnt = modify(cnt,multiple_two);
	printf("* 2 = %d\n",cnt);

	printf("%d ",cnt);
	cnt = modify(cnt,modulo_two);
    printf("%% 2 = %d\n",cnt);

    return 0;
}
