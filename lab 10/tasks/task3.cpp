#include <iostream>
#include <list>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

// Declare a list of integers
list<int> myList;
unordered_map<int, int> record;

int n;
cout<<"number of inputs ";
cin>>n;
cout<<endl;

int num;
for(int i=0; i<n; i++){
    cin>>num;
    myList.push_front(num);
}

//list entered into map
for(auto it=myList.begin(); it != myList.end(); it++ ){
    record[*it]++;

}



// sort in ascending
    /*vector<pair<string, int>> sorted_records(studentrecord.begin(), studentrecord.end());*/
    //For example, pair<string, int> represents a pair where the first element is a string and the second element is an integer.
    vector<pair<int, int>> sorted_records;
    for (auto it = record.begin(); it != record.end(); it++) {
        sorted_records.push_back(*it);
    }
    
    //*it: Here, it is an iterator pointing to an element in the studentrecord map. Dereferencing it (*it) gives us the key-value pair that it is pointing to. In other words, *it represents a pair where the first member is the student's name (a string) and the second member is the student's score (an int).sorted_records.push_back(*it): This line adds the pair pointed to by it to the end of the sorted_records vector.
    
    auto ascend = [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    };

    sort(sorted_records.begin(), sorted_records.end(), ascend );


    // display
    for(auto ite = sorted_records.begin(); ite !=sorted_records.end(); ite++ ){

        
        cout<<ite->first<<" : ";
        cout<<ite->second;

        cout<<endl;
    
    }
}

