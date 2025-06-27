#include<stdio.h>

struct rec{
	int l; int b;
};

int main(){
	struct rec r = {10,5};	
	struct rec *p = &r;
	printf("length : %d, breadth : %d\n", r.l, r.b);
	r.l = 20;
	printf("length : %d, breadth : %d\n", r.l, r.b);
	(*p).l = 30;
	p->b = 15;
	printf("length : %d, breadth : %d\n", p->l, r.b);
	
	return 0;
}
