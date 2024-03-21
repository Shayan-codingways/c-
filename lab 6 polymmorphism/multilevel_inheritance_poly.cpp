//multilevel inheritense

#include<iostream>

using namespace std;

class shape{
	public:
	virtual void draw(){
		cout << "I am drawing shape" << endl;
	}
};
class circle {
	public:
		virtual void draw(){
			cout << "I am drawing circle" << endl;
		}
};
class square : public shape, public circle{   // this class has 2 parents
	public:
		void draw(){
			cout << "I am drawing sqaure" << endl;
		}
};
// ab agar base class k through mn square draw krna chahta hn,
// to class shape to mujhy class square ki traf
//direct krna ho ga,
// is kaliay base class ko child class ki traf reference krna ho ga;
// is kaliay pointer 
int main(){
	circle* ptr;  //parent class ka object bnaya, leikin type pointer rakhein gy
	square obj; // ab child class, for example circle wali class ka object bnayngyy..
	ptr = &obj; // ab ptr waly object mn sari information child class circle k object obj ki chali jayy gi
	ptr->draw(); // abhi bhi parent class shape child ko refer nhi kry gii aur "I'm drawing shape" ayy ga 
	// jab tk hm virtual keyword parent k us function k sath na laga dein
}