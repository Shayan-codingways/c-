#include <iostream>
#include <list>
using namespace std;

int main() {
list<int> lst = {1, 2, 3, 4, 5};

// Using iterator to access elements
for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
cout << *it << " ";
}

cout << endl;
return 0;
}
