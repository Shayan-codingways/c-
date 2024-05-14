#include <iostream>
#include <list>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    // Declare a list of strings
    list<string> myList;
    multimap<string, int> record;

    int n;
    cout << "Number of inputs: ";
    cin >> n;
    cout << endl;

    string item;
    for(int i = 0; i < n; i++) {
        cin >> item;
        myList.push_front(item);
    }

    // List elements entered into multimap with count
    for(auto it = myList.begin(); it != myList.end(); it++) {
        record.insert({*it, 1}); // Insert with initial count of 1
    }

    // Sort the multimap based on keys
    vector<pair<string, int>> sorted_records(record.begin(), record.end());

    // Display the sorted records
    for(auto ite = sorted_records.begin(); ite != sorted_records.end(); ite++) {
        cout << ite->first << " : " << ite->second << endl;
    }

    return 0;
}



