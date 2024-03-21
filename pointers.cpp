#include <iostream>
using namespace std;

int main()
{
    // pointers are data types that holds data types of other data types.

    int a = 3; 
    int* b= &a; // pointer b holding address of a 
    // & address operator  
    cout << &a << endl;
    cout << b <<endl;

    //--> * derefencing operator
    cout << "the value at b: "<< *b <<endl <<endl ;

    //pointer to pointer//

    int**c= &b;//stores address of pointer
    cout << "the address value at c: "<< c<<endl;
    cout << "the  value at c: "<< **c<<endl;





    return 0;
}