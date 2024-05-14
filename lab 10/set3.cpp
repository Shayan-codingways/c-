/*Question*/
/* Write a C++ program that takes integers as input from the user until a negative integer is entered.
The program should store the positive integers in a std::set and then print the elements of the set in
ascending order. */


#include <iostream>
#include <set>
using namespace std;

int main() {
set<int> mySet;

// Take input from the user
int num;
cout << "Enter a positive integer (or a negative integer to exit): ";
cin >> num;

// Continue taking input until a negative integer is entered
while (num >= 0) {

mySet.insert(num);
cout << "Enter a positive integer (or a negative integer to exit): ";
cin >> num;

}
// Print the set elements in ascending order
cout << "Set elements:";

for (int n : mySet) {
cout << n << " ";
}

cout << endl;

}
