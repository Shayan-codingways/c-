/*
question
Write a C++ program that takes integers as input from the user until a negative integer is entered. The
program should store the positive integers in a std::list and then print the elements of the list in the reverse
order.

*/

#include <iostream>
#include <list>
using namespace std;

int main() {
list<int> myList;
// Take input from the user
int num;
cout << "Enter a positive integer (or a negative integer to exit): ";
cin >> num;

// Continue taking input until a negative integer is entered
while (num >= 0) {
myList.push_front(num);
cout << "Enter a positive integer (or a negative integer to exit): ";
cin >> num;
}

// Print the list elements in reverse order
cout << "List elements in reverse order:";
for (int n : myList) {
cout << n << " ";
}

cout << endl;

}
