#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    map<string,float> studentrecord;

    int N;
    cout<<"Number of students: ";
    cin >> N;
    cout<< endl;
    
    // takes input and insert in map
    for (int i = 0; i < N; i++) {
        string name;
        int score;

        cin >> name >> score;
        studentrecord[name] = score;
    }


    // sort in ascending
    /*vector<pair<string, int>> sorted_records(studentrecord.begin(), studentrecord.end());*/
    //For example, pair<string, int> represents a pair where the first element is a string and the second element is an integer.
    vector<pair<string, int>> sorted_records;
    for (auto it = studentrecord.begin(); it != studentrecord.end(); it++) {
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