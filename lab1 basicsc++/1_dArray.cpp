
/*An Array is a collection of fixed number of elements of same data type.
1-D ARRAY:

    ● 1-D Array is a form of array in which elements are arranged in a form of List.
    ● To declare a 1D array you need to specify the data type, name and array size.*/


#include <iostream>
using namespace std;

int main()
{
    int item[5]; // Declare an array item of five components
    int sum = 0;
    int counter;

// taking inputs and taking sum
    cout << "Enter five numbers: ";
    for (counter = 0; counter < 5; counter++)
    {
        cin >> item[counter];
        sum = sum + item[counter];
    }
    cout << endl;
    cout << "The sum of the numbers is: " << sum << endl;


// Print the numbers in reverse order.
    cout << "The numbers in reverse order are: ";
    for (counter = 4; counter >= 0; counter--)
        cout << item[counter] << " ";
    cout << endl;

    return 0;
}
