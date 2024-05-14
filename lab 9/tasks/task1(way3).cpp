//3rd way 

// C++ program to demonstrate descending order sort using
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    /*
    auto sorted = [](int a, int b){
        return a>b;
    };
    
 
    sort(arr, arr+n, sorted );
    */
    sort(arr,arr+n,[](int a, int b){  return a>b; }); 
    
    /*[](int a, int b): This part defines a lambda function with two integer parameters a and b. In C++, the square brackets [] are used to define lambda expressions.
    
{ return a > b; }: This part contains the body of the lambda function. It returns true if a is greater than b, indicating that a should be placed before b in the sorted sequence.
 (if the value is true than no sortion occurs else sortion occurs on false)
Here's how the lambda function works within the std::sort algorithm:

When std::sort needs to compare two elements a and b during the sorting process, it invokes this lambda function.

The lambda function then compares a and b and returns true if a should precede b in the sorted sequence. In this case, it returns true if a is greater than b, indicating that the sorting order is descending.*/
 
    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
    return 0;
}


//all 
