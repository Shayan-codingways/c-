//inheritense different types
//we'll use public inheritense in this class
//types:
//single inheritense , two classes: base(parent) class and derived(child) class ,
// members of base will be acessible in child class
//multilevel inhertense
//multiple inheritense
//hybrid inheritense
#include<iostream>
using namespace std;


// parent class
class Parent{
	
	public:

	int x;

	void setx(){
		cout << "please enter x" << endl;
		cin >> x;
	}

};

// daughter class with parent as public
class Child : public Parent{

	private:
		int y;

	public:
		void sety(){
			cout << "please enter y" << endl;
			cin >> y;
		}
		int sum(){
			return x+y;
		}
};


int main(){

	Child obj;

	obj.setx();
	cout<<obj.x;
	obj.sety();

	cout << "The sum of x and y is : " << obj.sum();

}