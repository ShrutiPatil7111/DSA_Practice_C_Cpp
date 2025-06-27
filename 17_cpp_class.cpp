#include<iostream>
using namespace std;

class rec{
	private:
		int l; int b;
	public:
		rec(){ // default constructor
			l = 0; b = 0; // properties
		}
		rec(int len, int bre){ // parameterized constructor
			l = len; b = bre;
		}	
		// facilitators : functions for processing
//		int area(){ return l*b;}
		int area(); // only declaration 
		int perimeter(){ return 2*(l+b);}
		// mutator functions
		void setLength(int len){ l = len;}
		void setBreadth(int bre){ b = bre;}
		// accessor functions
		int getLength(){ return l;}
		int getBreadth(){ return b;}
		~rec(){ // destructor; no arguments; no return type; releases memory dynamically allocated in constructor	
			printf("Destructor is called!\n");
		}
};

int rec::area(){ // definiton using "scope resolution" operator outside the class
	return l*b;
}

int main(){
	rec r(10,5);
	
	cout<<"Area : "<<r.area()<<endl;
	cout<<"Perimeter : "<<r.perimeter()<<endl;
	
	return 0;
}
