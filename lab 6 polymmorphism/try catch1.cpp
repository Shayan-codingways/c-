//exception handling
#include<iostream>
#include<string.h>
//.....................     void   likha   ho to  return nhi likhty/..........
using namespace std;

int main(){
	int arr[4], a;
	cout << "PLease enter values ofr a" << endl;
	for (int i=0; i<6; i++){
		cin >> a;
		arr[i]=a;
		try{
			if (i>3){
				throw 4;
			}
			
		}
		catch(int message){
			cout << " Arr size was  " << message << endl;
		}
	}
}