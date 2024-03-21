//Task 3: Take 2 integers input from the user and compute its sum using function

#include<iostream>
using namespace std;

//function of add
int add(float no1, float no2){
    float res;

    res=no1+no2;
    return res;
}


int main(){
    
    // declared
    float x; float y;
    float sum;
    
    //input taking
    cout << "Enter 2 numbers for addition: " << endl;
    cin >> x;
    cin >> y;
    
    //function call and display
    sum=add(x,y);
    cout << "The sum of " << x << " and " << y << " is " <<sum;

}

