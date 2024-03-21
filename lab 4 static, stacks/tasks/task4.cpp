#include <iostream>
using namespace std;



class Counter{
	private:

		static int objectCount;


	public:

		Counter(){
			objectCount++;
		}

		void displayCount(){
		    cout<<"The no of times it is run = "<<objectCount;
		}

};

int Counter::objectCount=0;

int userCount(){
    return 5;
    //return Counter::objectCount;
}


int main()
{
	int n = userCount();
	Counter uwu[n];
	uwu[0].displayCount();
	return 0;
}