// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> num ={1,2,3,4,5};

    //transform(arr1 start, arr1 end, arr2 start)
    transform(num.begin(),num.end(),num.begin(),
        [](int x) { 
            return x+1;
        }
    
    );
    for(auto it :num){
        cout<<it<<" ";
    }
    
    cout<<endl;


    // erase(num.bgin(),num.end(),num.begin(),remove_if([](int x){
    //     if(!x%2){
    //         return x;
    //     }
    // }))


    num.erase(remove_if(num.begin(),num.end(),[](int x){ return x%2!=0; }) ,num.end());
    for(auto it :num){
        cout<<it<<" ";
    }
    
    cout<<endl;
    
    
    cout<<accumulate(num.begin(),num.end(),0)<<endl;
    
}