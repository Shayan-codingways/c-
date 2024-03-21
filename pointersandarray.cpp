#include <iostream>
using namespace std;

int main()
{

    int i,marks[5]={23,56,45,34,34};

    for(i=0;i<5;i++){
        cout<<"The value of marks " << i << " is "<< marks[i]<<endl;
    }
    //pointers and arrays
    int*p=marks; //equate to 1st component
    cout<< "the address value of marks[0]is "<<p<<endl; 
    cout<< "the value of marks[0]is "<<*p<<endl; 
    cout<< "the value of marks[0]is "<<*(p+1)<<endl; 
    cout<< "the value of marks[0]is "<<*(p+2)<<endl; 
    cout<< "the value of marks[0]is "<<*(p+3)<<endl; 
    cout<< *(p++)<<endl;  //(23 displayed and incremented by 1 so 56
    cout<< *(p)<<endl; //56 displayed
    cout<< *(++p)<<endl;  // pre increment to 45


    /*pointer aritmetic*/
    /*adress new(p+i)=address current(p)+(i*size of data type)*/

    return 0;
}