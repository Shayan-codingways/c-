// fibonnaci 1 1 2 3 5 8 13 21
 
#include <iostream>
using namespace std;

int fibonacci(int n)
{ 
    //base case
    if (n <= 2)
        return 1; // eg n=0 or n=1  0 resp 1

    //actual formula for nth term
    return fibonacci(n - 1) + fibonacci(n - 2); //1+2=3

    //fib(3)=fib(1)+fib(2)=fib(1)+fib(1)+fib(0)
    
}

int main()
{
    int n;
    
    printf("Enter the value of n: ");
    cin >> n;

    // called fibbonaci and displayed nth term
    int res=fibonacci(n);
    cout <<"nth term of fibonacci is: "<<res;

    //dispalying sequence
    int i;
    cout<<endl;
    for (i = 1; i <= n; i++)
    {
        cout<< fibonacci(i) <<" ";
    }
    


    return 0;
}