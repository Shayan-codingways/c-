/*
Variables created during the program execution are called dynamic variables

● To create a dynamic variable we use new operator. The new operator allocates the memory of a designated type.
○ It returns a pointer to the allocated memory.

*/

#include<iostream>
using namespace std;

int main(){
    
    int* intPtr;
    char* charArray;
    int arraySize;

    intPtr = new int; // allocating memory to single variable
        cout << "Enter an Integer Value: ";
        cin >> *intPtr;

        cout << "Enter the size of the Character Array : ";
        cin >> arraySize;

    charArray = new char[arraySize]; // allocating memory to array

    for (int i = 0; i < arraySize; i++)
        cin >> charArray[i];
    
    for (int i = 0; i < arraySize; i++)
        cout << charArray[i];

return 0;
 
}
