#include<stdio.h>

struct Rec{
	int l;
	int b;
	char x;
}vari;

int main(){
	printf("Size of struct : %d",sizeof(vari));
	
	return 0;
}
