//exception handling
#include<iostream>
using namespace std;
//program mn divided by 0 nhi ho sakta
//is liay exception handler bnaty hn
int main(){
	int a,b, res;
	cout << "Enter values for a and b : " << endl;
	cin >> a >> b;
	try{
		if (b==0){
			throw 0;
			
		}
		res=a/b;
		cout << res;
	}//try block will be followed by catch
	catch(int msg){ // ye message mn wo value ay gii jo throw k aagy likha ho ga
		cout << "Can't divide by  " << msg;
	}
	
}
//1. requirement
//2. analysis
//3. components design
//4. functionns/detail design
//5. developers then code
//6. testing
//7. validation/verification