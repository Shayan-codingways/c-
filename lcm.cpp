#include <iostream>
using namespace std;

int gcd(int x, int y)
{

    int i, gcd;
    for (i = 1; i <= x && i <= y; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            gcd = i;
            cout << gcd << endl;
        }
    }
    return gcd;
    
}

int lcm(int x,int y,int res){
   int lcm=((x*y)/(res));
   return lcm;
}

int main()
{
    int x, y;

    cout << "Enter 2 numbers for lcm: " << endl;
    cin >> x;
    cout << endl;
    cin >> y;

    int res=gcd(x,y);
    cout<<"The gcd is: " << res<<endl; 
    int lcm_val=lcm(x,y,res);
    cout<<"lcm of numbers is: " << lcm_val;
}