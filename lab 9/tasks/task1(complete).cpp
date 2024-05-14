// C++ program to demonstrate descending order sort using
// greater<>().
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = { 1, 1, 8, 8, 6, 7, 3, 4, 2, 0,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
   
    reverse(arr,arr+n); 
    cout << "Array after reversing : \n";
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    
    //rotate(arr,arr+n);  --> rotate(start, rotation, end)
    rotate(arr, arr + 1 , arr + n);
    cout<<endl << "Array after rotating: \n";
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    
    sort(arr,arr+n,[](int a, int b){  return a>b; });
    cout<<endl << "Array after sorting: \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
        
    cout<<endl;
 
    cout<<*min_element(arr,arr+n)<<endl; 
    cout<<*max_element(arr,arr+n)<<endl; 
    cout<<count(arr,arr+n,5)<<endl; 
    cout<<accumulate(arr,arr+n,10); //accumulate(arr,arr+n, sum=initialize)
    
  
}