#include <iostream>
#include <map>
using namespace std;

int main() {
map<int, string> myMap;

myMap[1] = "One";
myMap[2] = "Two";
myMap[3] = "Three";

// Using iterator to access elements
for (map<int, string>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
cout << it->first << ": " << it->second << endl;
}
return 0;
}
