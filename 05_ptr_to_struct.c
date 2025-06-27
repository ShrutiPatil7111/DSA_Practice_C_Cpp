#include<stdio.h>

struct rec{
	int l; int b;
};

int main(){	
	struct rec *p;
	p = (struct rec*)malloc(sizeof(struct rec)); // vari in heap
	printf("length : %d, breadth : %d\n", p->l, p->b); // garbage
	p->l = 30;
	p->b = 15;
	printf("length : %d, breadth : %d\n", p->l, p->b);
	
	return 0;
}
