//Find the largest number of array

#include<iostream>
using namespace std;

int main(){
    //declared variables
    int i=0, arr[10];
    int n;

    // asking size of array
    cout << "Enter the number of elements(1-100): ";
    cin >> n;
    
    // taking inputs in array
    cout << endl  << "Make an Array --> " << endl;

    while(i<n){
        cout<<"Enter numbers at " << i << " index: ";
        cin >> arr[i];
        i++;
    }

    //finding largest number of an array
    for(i=0;i<n;i++){
        if (arr[i]>arr[0]){
            arr[0]=arr[i];
        }
    }

    cout << "Largest number: " << arr[0];

    //finding smallest integer
    int j;
    for(j=0;j<n;j++){
        if (arr[j]<arr[0]){
            arr[0]=arr[j];
        }
    }

    cout << endl << "smallest number: " << arr[0];

}