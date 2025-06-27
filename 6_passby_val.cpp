// pass by value
#include<iostream>
using namespace std;
/*
	In pass by value actual parameters will not be modified 
	if any changes are done to the formal parameter
*/

void swap(int a, int b){ // a, b are "formal" parameters
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main(){
	int x = 10, y = 5;
	cout<<"Numbers before swapping : x = " << x << " y = " << y<<endl;
	swap(x,y); // x, y are "actual" parameters
	cout<<"Numbers after swapping : x = " << x << " y = " << y<<endl;
	return 0;
}
