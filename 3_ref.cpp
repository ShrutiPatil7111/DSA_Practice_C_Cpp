//#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int a = 10; // nothing before vari name :- data vari
//	int *p = &a; // * before vari name :- pointer
	int &r = a; // & before vari name :- reference
/*
	Reference :- Concept in C++ not in C
	Aliase to vari
	must be initialized when declared
	2 names(a and r) for same val
*/	
	cout<<a<<endl;
	r++;
	cout<<r<<endl;
	printf("%d", a);
	
	return 0;
}
