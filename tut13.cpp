#include <iostream>
using namespace std;

int main()
{
    int n,i,j;

    // option to choose
    cout << "Enter n for pattern: ";
    cin >> n;

    for(i=1;i<=n;i++){
        for ( j = 0; j <=n; j++){
            if (i!=j){
                cout << "*"; 
            }
            else{
                break;
            }
        }
        cout << endl;
    }

    return 0;
}