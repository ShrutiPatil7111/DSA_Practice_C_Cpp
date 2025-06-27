#include<iostream>
using namespace std;

template <class T> // Generic class
class Arithmetic{
	private:
		T a, b;
	public:
		Arithmetic(T a, T b);
		T add();
		T sub();
};
template <class T>
Arithmetic<T>::Arithmetic(T a, T b){
			this->a = a;
			this->b = b;
		}
template <class T>
T Arithmetic<T>::add(){
			T c;
			c = a+b;
			return c;
		}
template <class T>
T Arithmetic<T>::sub(){
			T c;
			c = a-b;
			return c;
		}

int main(){
	Arithmetic <int> ar(10,5); 
	Arithmetic <float>ar2(15.3,7.7);
	
	cout<<"First :"<<endl;
	cout<<"Add : "<<ar.add()<<endl;
	cout<<"Sub : "<<ar.sub()<<endl;
	
	cout<<"Second :"<<endl;
	cout<<"Add : "<<ar2.add()<<endl;
	cout<<"Sub : "<<ar2.sub()<<endl;
	
	return 0;
}
