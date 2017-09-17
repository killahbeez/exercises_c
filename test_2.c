#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct didi {
	int a;
	int b;
	void (*meth)(struct didi* this,int a, int b);
} didi_t;

void method_1(struct didi *,int,int);
void method_2(struct didi *,int,int);

int main(){
	didi_t obj;
	obj.a = 3;
	obj.b = 4;
	obj.meth = method_1;
	(obj.meth)(&obj,obj.a,obj.b);
	printf("a: %d\n",obj.a);
	printf("b: %d\n",obj.b);
	obj.meth = method_2;
	(obj.meth)(&obj,obj.a,obj.b);
	printf("a: %d\n",obj.a);
	printf("b: %d\n",obj.b);
}

void method_1(didi_t *this,int a, int b){
	this->a = 31;
	this->b = 41;
}

void method_2(didi_t *this,int a, int b){
	this->a = 32;
	this->b = 42;
}


