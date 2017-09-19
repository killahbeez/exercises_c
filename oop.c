#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct obj {
	int result;
	void (*meth)(struct obj *, int, int);
} obj_t;

void adding(struct obj *,int,int);
void multiply(struct obj *,int,int);

int main(){
	obj_t obiect_1;
	obj_t obiect_2;
	
	obiect_1.meth = adding;
	obiect_1.meth(&obiect_1,3,4);
	printf("adding result: %d\n",obiect_1.result);

	obiect_1.meth = multiply;
	obiect_1.meth(&obiect_1,3,4);
	printf("multiply result: %d\n",obiect_1.result);
	
	obiect_2.meth = adding;
	obiect_2.meth(&obiect_2,5,4);
	printf("adding result: %d\n",obiect_2.result);
}

void adding(obj_t *this,int a, int b){
	this->result = a + b;
}

void multiply(obj_t *this,int a, int b){
	this->result = a * b;
}


