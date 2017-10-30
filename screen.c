#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct {
	uint8_t r;
	uint8_t g;
	uint8_t b;
} pixel;

typedef struct {
	uint8_t width;
	uint8_t height;
	pixel *p;
} screen;

screen new_screen(uint8_t w, uint8_t h){
	screen scr;
	scr.width = w;
	scr.height = h;
	scr.p = malloc( w * h * sizeof(pixel));
	for(int i=0;i<h;i++){
		for(int j=0;j<w;j++){
			scr.p[j+ i*w].r = i; 
			scr.p[j+ i*w].g = j; 
			scr.p[j+ i*w].b = 0; 
		}
	}
	
	return scr;
}

void print_screen(screen *scr) {
	for(int i=0;i<scr->height;i++){
		for(int j=0;j<scr->width;j++){
			printf("(%u %u %u) ",scr->p[j+i*scr->width].r, scr->p[j+i*scr->width].g, scr->p[j+i*scr->width].b);
		}
		printf("\n");
	}	
}

int main(){
	screen scr = new_screen(5,5);
	print_screen(&scr);
	free(scr.p);
	return 0;
}
