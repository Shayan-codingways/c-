// post //pre decrement

#include <iostream>
using namespace std;
class Decrement
{
private:
    int val;   // 0 to infinite
  
public:
    // required constructors
    Decrement()
    {
        val = 0;
       
    }

    Decrement(int v)
    {
        val = v;
        
    }

    void displayDecrement()
    {
        cout << "ans: " << val << endl;
    }

    // overloaded minus (-) operator
    Decrement operator--()
    {
        val = val*4;
        return Decrement(val);
    }
    
    //postfix operator
    Decrement operator--(int)
    {
        val = val/4;
        return Decrement(val);
    }
};
int main()
{
    Decrement D1(11), D2(16);
    --D1;                  // apply negation
    D1.displayDecrement(); // display D1

    D2--;                  // apply negation
    D2.displayDecrement(); // display D2

    return 0;
}