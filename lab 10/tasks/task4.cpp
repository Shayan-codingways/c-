#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

int n;
cout<<"number of students: ";
cin>>n;
cout<<endl;

map<string, map<string, int>> map1;
unordered_map<string, map<string, int>>unorder_map;

string student;
int subjects;
string subject_name;
int marks;
map<string, int> temp;
cout<<"Student and their subjects: "<<endl;
for(int i=0; i<n; i++){
    cin>>student;
    cin>>subjects;

    for(int j=0; j<subjects; j++){
       cout<<"Subject name: " <<endl;
       cin>>subject_name;
       cout<<"Subject marks: " <<endl;
       cin>>marks;
       temp[subject_name]=marks;
    }
    map1.insert({student,temp});
    unorder_map.insert({student,temp});
    temp.clear();
}

//totalling for map
int sum=0;
map<string, int> order_newmap;
for(auto it= map1.begin(); it!=map1.end(); it++){
    for(auto ite=it->second.begin(); ite!=it->second.end(); ite++ ){
        sum+=ite->second;
    }
    order_newmap.insert({it->first, sum});
}

// totalling for unordered map
 sum=0;
map<string, int> unorder_newmap;
for(auto it= map1.begin(); it!=map1.end(); it++){
    for(auto ite=it->second.begin(); ite!=it->second.end(); ite++ ){
        sum+=ite->second;
    }
    unorder_newmap.insert({it->first, sum});
}


    // display map;
    for(auto ite = order_newmap.begin(); ite !=order_newmap.end(); ite++ ){

        
        cout<<ite->first<<" : ";
        cout<<ite->second;

        cout<<endl;
    
    }

    // display unorder_map;
    for(auto it = unorder_newmap.begin(); it !=unorder_newmap.end(); it++ ){

        
        cout<<it->first<<" : ";
        cout<<it->second;

        cout<<endl;
    
    }
}

