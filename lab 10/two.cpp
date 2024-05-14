#include <iostream>
#include <list>
using namespace std;

int main() {

// Declare a list of integers
list<int> myList;

// Add elements to the list
myList.push_back(1);
myList.push_back(2);
myList.push_back(3);

// Insert an element at the beginning
myList.push_front(0);

// Iterate over the list and print elements
cout << "List elements:";
for (auto it = myList.begin(); it != myList.end(); ++it) {
    cout << *it << "";
}

cout << endl;


}