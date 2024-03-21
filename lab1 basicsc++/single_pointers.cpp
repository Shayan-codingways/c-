/*

A Pointer is a variable whose content is a memory address.

● Pointer variable holds the memory address of the variable which is of same data type
(integer in this case).
● To assign the memory address of any variable to the pointer variable we use Address
of Operator ( & ).

*/

#include <iostream>
using namespace std;

int main()
{
    int *p;
    int x = 37;

    p = &x; //pointer stores value of address x 

    cout << "Line 1: x = " << x << endl; // Line 1
               
    cout << "derefrenced  *p = " << *p << ", x = " << x << endl;

    *p = 58; // overwrites in x as well
    cout << "Line 5: *p = " << *p << ", x = " << x << endl; 

    // address of p itself
    cout << "Line 6: Address of p = " << &p << endl; 

    // address of x stored in p
    cout << "Line 7: Value of p = " << p << endl;    

    cout << "Line 8: Value of the memory location " << "pointed to by *p = " << *p << endl; 

    cout << "Line 9: Address of x = " << &x << endl; 
    
    cout << "Line 10: Value of x = " << x << endl;     

    return 0;
}