#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"using function with 2 arguments"<< endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"using function with 3 arguments"<< endl;
    return a+b+c;
}

int main(){
   cout<<"The sum of 3 and 6 is: " <<add(3,6);
   cout<<"The sum of 3 and 7 and 6 is: " <<add(3,7,6);
}