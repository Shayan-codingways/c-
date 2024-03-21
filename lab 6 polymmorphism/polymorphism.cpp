#include<iostream>
using namespace std;

class cal{
	public:

	virtual	int perform(int a, int b){
			
	}
};
class sum: public cal{
	public:
		int perform(int a, int b){
			return a+b;
		}
};
class sub: public cal{
	public:
		int perform(int a, int b){
			return a-b;
		}
};
int main(){
	cal* ptr;
	sum obj;
	ptr = &obj;
	cout << ptr->perform(188,377); // ab cout bhi krna ho ga, agar return ki jaga class mn void wala function 
	                        // aur cout likha hota to yahan cout likhny ki zarorat na hoti
}