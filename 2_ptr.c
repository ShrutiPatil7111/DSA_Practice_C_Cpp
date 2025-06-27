#include<stdio.h>
#include<stdlib.h> // for malloc func 
int main(){
	int A[5] = {2,4,6,8,10};
	int *p, i;
	p = A; // no need of & sign
	
	int *ptr; // ptr will be inside 'stack'
//	but, array of 5 integers will be in 'heap'
	ptr = (int*)malloc(5*sizeof(int)); // dynamic 
/*	
	new is type-safe. 
	It automatically returns a pointer of the correct type, 
	so you don't need to cast.	
*/	
//	ptr = new int[5]; // in C++ simple syntax 
	
	ptr[0] = 10;
	ptr[1] = 15;
	ptr[2] = 14;
	ptr[3] = 21;
	ptr[4] = 31;
	
	
	for(/*error : int */ i=0; i<5; i++){
		printf("%d\t", A[i]);
	}
	printf("\n");
	for(i=0; i<5; i++)
		printf("%d\t", p[i]); // ptr can act as a name of array
	printf("\n");
		
	for(i=0; i<5; i++)
		printf("%d\t", ptr[i]);
		
	free(ptr); // deallocating memory from heap
//	delete []ptr; // in C++
		
	return 0;
}
