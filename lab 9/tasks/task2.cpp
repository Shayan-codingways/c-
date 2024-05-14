#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    vector<string> vec = { "banana", "apple", "apple","orange", "grape" };
    
    //1-- sortion
    sort(vec.begin(),vec.end());
    cout<<endl << "Array after sorting: \n";
    for (int i = 0; i <vec.size(); ++i)
        cout << vec[i] << " ";
        
    cout<<endl;
    
    //2--reversion
    reverse(vec.begin(),vec.end()); 
    cout << "Array after reversing : \n";
    for (int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
 
    cout << endl<<endl;
    //rotate(vec.begin(),vec.end());
    rotate(vec.begin(), vec.begin() + vec.size(), vec.end()); //rotate(vec.begin( //start, vec.begin + 2 //rotation wanted, vec.size //end)
    cout << "Array after rotating first two elements: \n";
    for (int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
   

    cout<<endl;
    cout<<*min_element(vec.begin(),vec.end())<<endl; 
    cout<<*max_element(vec.begin(),vec.end())<<endl; 
    cout<<count(vec.begin(),vec.end(),"apple")<<endl; 
    
    //cout<<accumulate(vec.begin(),vec.end(),0); //accumulate(arr,arr+n, sum=initialize)
    int total_length = accumulate(vec.begin(), vec.end(), 0, [](int sum, const string& str) {
        return sum + str.length();
    });
    cout << "Total length of all strings in the vector: " << total_length << endl;

    
    
}