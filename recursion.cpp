#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }

    return n * factorial(n-1);

    // factorial(4)=4*factorial(3)
    // factorial(4)=4*3*factorial(2)
    // factorial(4)=4*3*2*factorial(1)
    // factorial(4)=4*3*2*1
    
}

int main()
{
    // factorial of a number
    //6!=6*5.....
    //0!=1 and 1!=1
    //n!=n*(n-1)!
    int num;

    cout << "Enter the number for factorial: ";
    cin >> num;

    int res=factorial(num);

    cout << res;



    return 0;
}