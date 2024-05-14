// Declaration: To use std::list, include the <list> header file.
#include<iostream>
#include <list>
using namespace std;

int main(){

// Initialization: std::list can be initialized using the default constructor or with initial elements.
list<int> myList; // Empty list
list<int> myList = {1, 2, 3, 4, 5}; // List with initial elements

// Insertion: Elements can be inserted at the beginning, end, or at a specific position in the list.
myList.push_back(6); // Insert at the end
myList.push_front(0); // Insert at the beginning

auto it = next(myList.begin(), 2); // Iterator to the third element
myList.insert(it, 10); // Insert 10 at the third position


// Accessing Elements: Elements in a std::list can be accessed using iterators. Random access is not supported
for (auto it = myList.begin(); it != myList.end(); ++it) {
cout << *it << " ";
}
// Removal: Elements can be removed from the list by value, range, or position.
myList.remove(3); // Remove all occurrences of 3

myList.pop_front(); // Remove the first element
myList.pop_back(); // Remove the last element

auto it = next(myList.begin(), 2); // Iterator to the third element
myList.erase(it); // Remove the third element

// Size and Clear: Obtain the size of the list using size() and clear the list using clear().
cout << "Size: " << myList.size() << endl;
myList.clear(); // Remove all elements

//Sorting: std::list can be sorted using the sort() method
myList.sort(); // Sort the list in ascending order

// Reverse: Reverse the elements in the list using reverse().
myList.reverse(); // Reverse the order of elements

}
