#include <iostream>
#include <set>
using namespace std;

int main() {

// Declare a set of integers
set<int> mySet;

// Insert elements into the set
mySet.insert(5);
mySet.insert(3);
mySet.insert(8);
mySet.insert(1);
mySet.insert(6);

// Iterate over the set
cout << "Set elements:";
for (int num : mySet) {
cout << num << " ";
}
cout << endl;

// Check if an element exists in the set
if (mySet.find(3) != mySet.end()) {
cout << "3 is present in the set" << endl;
}

}