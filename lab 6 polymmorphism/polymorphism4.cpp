#include<iostream>
using namespace std;
class A{
	public:
		virtual void fun(){}
		  
};                         
class B: public A{
	public:
		int y= 5;
		void print(){
			cout << "A" << endl;
		}
};
class C: public A{
	public:
	int z= 6;
	void drint(){
		cout << "C" << endl;
	}
};
int main(){
	B b;
	A* a;
	a = &b;
	cout << a  << endl;
	C* c;
	c = dynamic_cast<C*>(a);
	cout << c  <<endl;
	if(c=NULL){
		cout << "Cross casting failed";
	}
	else{
		cout << "Cross Casting";
	}
}