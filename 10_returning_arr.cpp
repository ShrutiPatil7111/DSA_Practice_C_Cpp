#include<iostream>
using namespace std;

int* func(int size){ // returning array as a pointer
	int *p, i;
	p = new int[size]; // dynamic allocation of an array in C++; in C use nalloc
	for(i=0; i<size; i++)
		p[i] = i+1;
	return p;
}

int main(){
	int *ptr, sz, i;
	cout<<"Enter size of array you want : ";
	cin>>sz;
	
	ptr =  func(sz);
	
	for(i=0; i<sz; i++){
		cout<<ptr[i]<<" ";
	}
	cout<<endl;
	for(i=0; i<sz; i++){
		cout<<*ptr<<" ";
		ptr++; // pointer arithmetic
	}
	
	return 0;
}
