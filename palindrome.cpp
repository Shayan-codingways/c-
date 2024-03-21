#include <iostream>
using namespace std;

int main()
{
    int number;
    int temp,r;
    int sum=0;

    cout<<"Enter a number to check palindrome ";
    cin >> number;
    
    while(number>0){
        r= number%10;
        sum=sum*10 +r;
        number=number/10;
    }

    if(temp==sum){
        cout<<"Plaindrome";
    }
    else{
        cout<< "Not Palindrome";
    }

    return 0;
}