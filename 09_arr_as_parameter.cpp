#include<iostream>
using namespace std;
//void func(int arr[], int n){
void func(int *arr, int n){ // array is only passed as pointer
	cout<<"Size of array in func : "<<sizeof(arr)/sizeof(int)<<endl;
	cout<<"Array in func : "<<endl;
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	arr[0] = 20;
}
int main(){
	int arr[] = {2, 4, 6, 8, 10};
	int n = 5, i;
	
	cout<<"Size of array in main : "<<sizeof(arr)/sizeof(int)<<endl;
	
//	for-each loop is not available in older versions
//	for(int x : arr)
//		cout<<x<<" ";

	func(arr, n);	
	
	cout<<"Array in main : "<<endl;
	for(i=0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	
	return 0;
}
