#include <iostream>
#include <set>
using namespace std;

int main() {
set<int> mySet = {3, 1, 4, 1, 5, 9};

// Using iterator to access elements
for (set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it) {
cout << *it << " ";
}

cout << endl;
}