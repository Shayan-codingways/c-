#include<iostream>
using namespace std;

class A{

	private:
	    int x;

	public:
		void fun(){
			cout << "OOP IS FUN" << endl;
		}

	protected:
		void Not_fun(){
			cout << "I am not fun" << endl;
		}	

};
//we can access functions from class A to B using inheritense, 
//but here we'll use another method  (we can have public/ private/protcted modes for inheritance)
class B:public A{
	int y;

	public:
	//	x; //x can't be accessed bcz it is private
		//fun();//for fun it'll be compiled bcz it's public
		void Not_fun(){}; //ye protected wala hy, ye child mn accessible ho ga, bas, int main mn nhi kr paiin gyy
	
		
	
};

int main(){
	B obj;  //is case mn class A ka object pehly bany ga
	A obj1;
	
    obj.fun();
 //   Not_fun();
//	A obj1;
//	obj.fun_2(obj1); //ye line ooper waly comments kaliay
//	
	
}




//// is k baad u bhi ho skta hy k 2 parent classes hn aur us k neichy aik child class ho
// hirarchical inheritense
// hybrid inheritense
// multiple inheritense