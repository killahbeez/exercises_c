#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv){
    uint8_t age = 10;
    uint8_t height = 72;
    int didi[3] = {1,2,3};
    printf("%d\n",sizeof(didi));

    if(argv[1] != NULL){
        printf("%c\t%c\n",argv[1][1],argv[2][1]);
        printf("Arg1: %c\n",*(*(argv+1)+1));
        printf("Address of %s: %x %x %x\n",*(argv+1),(int)&(*(argv+1)),(int)&(*(*(argv+1))),(int)&(*(*(argv+1)+1)));
    }

    printf("I am %d years old \n",age);
    printf("I am %d inches tall\n",height);
    printf("Size of int: %d\n",sizeof(int));
    return 0;
}
