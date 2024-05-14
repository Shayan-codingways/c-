#include <iostream>
#include <list>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

// Declare a list of integers
list<string> myList;
map<string, int> record;

int n;
cout<<"number of inputs ";
cin>>n;
cout<<endl;

string item;
for(int i=0; i<n; i++){
    cin>>item;
    myList.push_front(item);
}

//list entered into map
for(auto it=myList.begin(); it != myList.end(); it++ ){
    record[*it]++;

}



// sort in ascending
    /*vector<pair<string, int>> sorted_records(studentrecord.begin(), studentrecord.end());*/
    //For example, pair<string, int> represents a pair where the first element is a string and the second element is an integer.
    vector<pair<string, int>> sorted_records;
    for (auto it = record.begin(); it != record.end(); it++) {
        sorted_records.push_back(*it);
    }
    
    //*it: Here, it is an iterator pointing to an element in the studentrecord map. Dereferencing it (*it) gives us the key-value pair that it is pointing to. In other words, *it represents a pair where the first member is the student's name (a string) and the second member is the student's score (an int).sorted_records.push_back(*it): This line adds the pair pointed to by it to the end of the sorted_records vector.
    
    auto ascend = [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second < b.second;
    };

    sort(sorted_records.begin(), sorted_records.end(), ascend );


    // display
    for(auto ite = sorted_records.begin(); ite !=sorted_records.end(); ite++ ){

        
        cout<<ite->first<<" : ";
        cout<<ite->second;

        cout<<endl;
    
    }
}

