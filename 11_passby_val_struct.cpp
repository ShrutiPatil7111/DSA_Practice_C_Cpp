#include<iostream>
using namespace std;

struct rec{
	int l; int b;
};

int area(struct rec vari){ // pass by val : struct as a parameter
	cout<<"Inside area (after incrementing):\n";
	vari.l++;
	vari.b++;
	cout<<"Length : "<<vari.l<<" Breadth : "<<vari.b<<endl;
	return vari.l * vari.b ;
}

int main(){
	struct rec r = {10,5};	
	cout<<"Inside main :\n";
	cout<<"Length : "<<r.l<<" Breadth : "<<r.b<<endl;
	printf("Area of rectangle : %d\n", area(r)); // passing struct as a parameter
	cout<<"Inside main (after incrementing in area values doesn't change):\n";
	cout<<"Length : "<<r.l<<" Breadth : "<<r.b<<endl;
	return 0;
}
