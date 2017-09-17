#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct didi {
	int result;
	void (*meth)(struct didi* this,int a, int b);
} didi_t;

void adding(struct didi *,int,int);
void multiply(struct didi *,int,int);

int main(){
	didi_t obj;
	
	obj.meth = adding;
	obj.meth(&obj,2,3);
	printf("adding result: %d\n",obj.result);

	obj.meth = multiply;
	obj.meth(&obj,2,3);
	printf("multiply result: %d\n",obj.result);
}

void adding(didi_t *this,int a, int b){
	this->result = a + b;
}

void multiply(didi_t *this,int a, int b){
	this->result = a * b;
}


