#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
// Declare a map with key as integer and value as string
map<int, string> myMap;

// Insert elements into the map
myMap[1] = "One";
myMap[2] = "Two";
myMap[3] = "Three";

// Access elements using the [] operator
cout << "Value of key 2: " << myMap[2] << endl;

// Iterate over the map
cout << "Map elements:";
for (auto it = myMap.begin(); it != myMap.end(); ++it) {
cout << " (" << it->first << ": " << it->second << ")";
}

cout << endl;

}