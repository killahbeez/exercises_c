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
	union {
		uint8_t a;
		float b;
		uint8_t c;
		uint8_t d;
		uint8_t e;
	} un;

	un.b = 345.65;
	printf("%u\n",un.a);
	printf("%f\n",un.b);
	printf("%d::%x\n",*(&un.a),*(&un.a));
	printf("%d::%x\n",*(&un.a+1),*(&un.a+1));
	printf("%d::%x\n",*(&un.a+2),*(&un.a+2));
	printf("%d::%x\n",*(&un.a+3),*(&un.a+3));
	uint32_t gr1 = 61455;
	uint8_t *gr = (uint8_t *) &gr1;
	printf("%x\n",gr1);
	uint8_t *f = gr + 1;
	f[0] = 0xff;
	f[1] = 0xff;
	f[2] = 0xff;
	printf("%x\n",gr1);
	printf("------------\n");
	printf("un.a address: %p\n",&(un.a));
	printf("un.b address: %p\n",&(un.b));
	printf("un.c address: %p\n",&(un.c));
	printf("un.d address: %p\n",&(un.d));
	printf("un.e address: %p\n",&(un.e));
	printf("un.a: %d\n",*(&un.a));
	printf("un.b: %f\n",*(&un.b));

	typedef struct {
		uint8_t a;
		uint8_t b;
		uint8_t c;
		uint8_t d;
		uint8_t e;
	} st_t;
	st_t st = {.a = 23, .b = 54};
	printf("st.a address: %p\n",&(st.a));
	printf("st.b address: %p\n",&(st.b));
	printf("st.c address: %p\n",&(st.c));
	printf("st.d address: %p\n",&(st.d));
	printf("st.e address: %p\n",&(st.e));
	printf("st.a: %d\n",st.a);
	printf("st.b: %d\n",st.b);
	printf("st.c: %d\n",st.c);
	printf("st.d: %d\n",st.d);
}

void method_1(didi_t *this,int a, int b){
	this->a = 31;
	this->b = 41;
}

void method_2(didi_t *this,int a, int b){
	this->a = 32;
	this->b = 42;
}


