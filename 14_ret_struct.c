/*
prog to demonstrate how func returns pointer to an object created in heap
*/
#include<stdio.h>
#include <stdlib.h> // Include stdlib.h for malloc

struct rec{
	int l; int b;
};

// returns add of struct
struct rec *func(){ // return type : ptr of type rec
	struct rec *p; // creating obj of type rec on heap
	p = (struct rec *)malloc(sizeof(struct rec));
//	p = new rec; // in C++, easy syntax; no malloc needed
	
	p->l = 15;
	p->b = 7;
	
	return p;
}

int main(){
	struct rec *ptr = func(); // will create obj in func & return add
	printf("Length : %d\nBreadth : %d\n", ptr->l, ptr->b);
	return 0;
}
