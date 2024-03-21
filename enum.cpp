#include<iostream>
using namespace std;

int main(){
    
    // passing value in these attributes to be used
    enum meal{breakfast,dinner,lunch};

    cout << breakfast<<endl;
    cout << lunch<<endl;
    cout << dinner<<endl ;

    meal m1 = dinner;
    cout<<m1<<endl;
     cout<<(m1==1)<<endl;
     cout<<(!m1==1)<<endl;

    return 0;
}