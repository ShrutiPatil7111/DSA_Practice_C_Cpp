/*
Highest Level of Programming in C is
where we define a structure &
we define all functions related to that structure
*/

#include<stdio.h>

// struct : grouping of data
struct rec{ 
	int len; int bre;
};
// func : grouping of instructions
void initialize(struct rec *p){
//	int l, b;
	printf("Enter length & breadth :\n");
//	scanf("%d %d", &l, &b);
	scanf("%d %d", &(p->len), &(p->bre));
//	p->len = l;
//	p->bre = b;	
}
int area(struct rec *p){
	return p->len * p->bre;
}
void changeLength(struct rec *p){
	int l;
	printf("Enter new length :\n");
	scanf("%d", &l);
	p->len = l;
	printf("New length : %d\n", p->len);
}

int main(){
	struct rec r; // struct vari creation
	
	initialize(&r);
	printf("Area of rectangle is %d\n", area(&r));
	changeLength(&r);
	printf("Area of rectangle is %d\n", area(&r));
	
	return 0;
}
