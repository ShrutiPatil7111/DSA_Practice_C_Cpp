#include<iostream>
using namespace std;

class Arithmetic{
	private:
		int a, b;
	public:
		Arithmetic(int a, int b){
			this->a = a;
			this->b = b;
		}
		int add(){
			int c;
			c = a+b;
			return c;
		}
		int sub(){
			int c;
			c = a-b;
			return c;
		}
};

int main(){
	Arithmetic ar(10,5), ar2(15,7);
	
	cout<<"First :"<<endl;
	cout<<"Add : "<<ar.add()<<endl;
	cout<<"Sub : "<<ar.sub()<<endl;
	
	cout<<"Second :"<<endl;
	cout<<"Add : "<<ar2.add()<<endl;
	cout<<"Sub : "<<ar2.sub()<<endl;
	
	return 0;
}
