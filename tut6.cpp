//sum of natural nos

#include<iostream>
using namespace std;

int main(){
    int i, n;
    int sum=0;

    cout << "How many nos you want the sum of: " << endl;
    cin >> n;


    for(i=1;i<=n;i++){
        sum=sum+i;
    }

    cout<< " The sum of " << n << "natural numbers is: " << sum; 

}

