#include <iostream>
using namespace std;


//user defined data type formed by existing data types
struct employee
{
    int id;
    char favchar;
    float salary;
};


typedef struct students
{
    int id;
    float cpga;
}stud;


int main()
{
    // struct employee initial
    struct employee shayan;

    shayan.id=27027;
    shayan.favchar = 'c';
    shayan.salary=122334;

    cout<<shayan.salary<<endl;

    // struct std initial
    stud Shayan;
    Shayan.cpga=3.45;

    cout<<Shayan.cpga;



    return 0;
}