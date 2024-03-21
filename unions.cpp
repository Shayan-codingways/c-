#include <iostream>
using namespace std;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4

}; // can any one of the defined in unions

// in struct 9 bytes would have been consumed
//but union allocates max byt which is 4 and this can be used to use any of the ones within it.

int main()
{
    union money m1;
    m1.rice=34;
    m1.car='c';
    // can use 1 at a time so answer m1. rice will throw will be a grabage
    cout<<m1.rice<<endl;
     cout<<m1.car;

    return 0;
}