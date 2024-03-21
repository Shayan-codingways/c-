// switch case

#include <iostream>
using namespace std;

int main()
{
    int option;

    // option to choose
    cout << "Choose an option (1 or 2): ";
    cin >> option;

    switch (option)
    {

    case 1:
        cout << "You chose Option 1." << endl;
        break;
    case 2:
        cout << "You chose Option 2." << endl;
        break;

    default:
        cout << "Invalid choice. Please choose 1 or 2." << endl;
        break;
    }

    return 0;
}