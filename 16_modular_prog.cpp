/*
Converting previous modular C program into C++
*/

#include<stdio.h>

// class : grouping of data members & functions, i.e, struct + func
class rec{ 
	private :
		int len; int bre;
	public :
		rec(){ // constructor; same name as a class; creates & initializes obj; no need of return type
//			int l, b;
			printf("Enter length & breadth :\n");
			scanf("%d %d", &len, &bre);
//			len = l;
//			bre = b;	
		}
		int area(){
			return len * bre;
		}
		void changeLength(){
			int l;
			printf("Enter new length :\n");
			scanf("%d", &l);
			len = l;
			printf("New length : %d\n", len);
		}
};

int main(){
	rec r; // class obj creation
	
	printf("Area of rectangle is %d\n", r.area());
	r.changeLength();
	printf("Area of rectangle is %d\n", r.area());
	
	return 0;
}
