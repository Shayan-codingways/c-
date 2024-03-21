// factorial
#include <iostream>
using namespace std;

int main()
{

    int i,n;
    int prod=1;

    cout << "Enter the number for factorial: ";
    cin >> n;

    for(i=1; i<=n; i++){
       prod=prod*i;
    }

    cout << "The factorial of " << n << " is " <<prod;

    return 0;
}