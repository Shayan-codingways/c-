//2nd way
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Input array
    vector<int> array = {5, -3, 2, 8, -1, 0};

    // Sorting the array in non-decreasing order
    sort(array.begin(), array.end());

    // Output sorted array
    cout << "Sorted array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}