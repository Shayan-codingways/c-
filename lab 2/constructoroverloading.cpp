#include<iostream>
using namespace std;

class complex{
private:
    int a,b;
public:
    //constructor 1
    complex(int x, int y){
        a=x;
        b=y;
    }

    //constructor 2
    complex(int x){
        a=x;
        b=0;
    }

    void print(){
        cout<<"Your num is "<< a << " + "<< b<< "i "<< endl;
    }

};


int main(){

complex c1(4,6);
c1.print();

complex c2(5);
c2.print();

}