/*
● A structure is a collection of fixed number of components in which the components
are accessed by name. The components may be of different types.
● Components of a structure are called members of the structure.
● To declare a structure you need to use the “struct” keyword along with the structure
name.
○ The struct block then contains all the members, which are variables of
different/same type.
struct structName
{
 dataType1 varName1;
 dataType2 varName2;
. . .
 dataTypen varNamen;
}
● To declare an object of the structure you need to use the name of structure and then
the name of structure object.

*/

#include <iostream>
using namespace std;

// struct is always public unlike classes that are private
struct studentType
{
    string firstName;
    string lastName;
    char courseGrade;
    int courseScore;
    double GPA;
};

int main()
{
    //decalring structure object
    studentType newStudent;

    //input in struct datatype
    cout << "Enter Details for the Student";
    cout << "Enter Student's First Name : ";
    cin >> newStudent.firstName;

    cout << "Enter Student's Last Name : ";
    cin >> newStudent.lastName;

    cout << "Enter Student's Course Grade : ";
    cin >> newStudent.courseGrade;

    cout << "Enter Student's Course Score : ";
    cin >> newStudent.courseScore;

    cout << "Enter Student's GPA : ";
    cin >> newStudent.GPA;

    // display in struct datatype
    cout << newStudent.firstName << endl;
    cout << newStudent.lastName << endl;
    cout << newStudent.courseGrade << endl;
    cout << newStudent.courseScore << endl;
    cout << newStudent.GPA << endl;
}
