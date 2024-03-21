/*
    ● 2-D Array is a collection of fixed collection of elements arranged in rows and columns.
    ● To declare a 2D array you need to specify the data type, name and no. of rows and
columns
*/

#include <iostream>
using namespace std;

int main()
{
    int row, col;
        cout << "Enter no of rows and cols: "<< endl;
        cin >> row >> col;

    int arr[row][col];
    int j,i;

    cout << "Enter Array elements: " << endl;

    for(i=0;i<row; i++){
        int sum=0;
        for(j=0;j<col;j++){
            cin >> arr[i][j];
            sum=sum+arr[i][j];
        }
        cout << "The sum of row: " << i << " is " << sum << endl;
    }


    return 0;
}