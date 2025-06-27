// pass by address
#include<iostream>
using namespace std;
/*
	Any changes done inside function will modify the actual parameters
*/

void swap(int *a, int *b){ // a, b are "formal" parameters
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int x = 10, y = 5;
	cout<<"Numbers before swapping : x = " << x << " y = " << y<<endl;
	swap(&x, &y); // x, y are "actual" parameters
	cout<<"Numbers after swapping : x = " << x << " y = " << y<<endl;
	return 0;
}
