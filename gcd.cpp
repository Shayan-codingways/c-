#include <iostream>
using namespace std;

int main()
{ 
    int x,y,i,gcd;

    cout<< "Enter 2 numbers for hcf: " << endl;
    cin>>x;
    cout<<endl;
    cin>>y;

    for ( i = 1; i<=x && i<=y; i++)
    {
        if(x%i==0 && y%i==0){
            gcd=i;
            cout<<gcd<<endl;
        }
    }

    cout<<" gcd of " << x << " and " << y <<" is "<<gcd;
    


}