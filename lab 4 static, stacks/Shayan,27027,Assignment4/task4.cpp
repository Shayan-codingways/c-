#include<iostream>
using namespace std;

class Counter{

	private:
		static int objectCount;

	public:

		Counter(){
        }

		void displayCount(){
		   
		}
};


int Counter :: objectCount; //used :: (scope resolution operator to access object count from class counter as objectcount is private+static)
int userCount(){

}

int main()
{
	int n = userCount();

	Counter uwu[n];
	uwu[0].displayCount();
	return 0;
}