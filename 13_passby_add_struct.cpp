#include<iostream>
using namespace std;

struct rec{
	int l; int b;
};

void changeLength(struct rec *ptr, int len){
	ptr->l = len;
}

int area(struct rec *vari){ // pass by add : struct as a parameter
	cout<<"Inside area (after incrementing):\n";
	vari->l++;
	vari->b++;
	cout<<"Length : "<<vari->l<<" Breadth : "<<vari->b<<endl;
	return vari->l * vari->b ;
}

int main(){
	struct rec r = {10,5};
	int len;	
	cout<<"Inside main :\n";
	cout<<"Length : "<<r.l<<" Breadth : "<<r.b<<endl;
	
	cout<<"Enter length to change : ";
	cin>>len;
	changeLength(&r, len);
	cout<<"New Length : "<<r.l<<endl;
	
	printf("Area of rectangle : %d\n", area(&r)); // passing struct as a parameter
	cout<<"Inside main (after incrementing in area values change):\n";
	cout<<"Length : "<<r.l<<" Breadth : "<<r.b<<endl;
	return 0;
}
