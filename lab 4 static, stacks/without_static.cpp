#include<iostream>
using namespace std;

class Employee{
    int id;
     int count; // if we just use count, then every object will have 1 count and count would alwyas be 1 // this is for the class not objects

    public:
        void setData(void){
            cout<<"Enter id: "<<endl;
            cin>>id;
            count++;
        }
          
        void getData(void){
            cout<<"the id is: "<< id<< " and employee number: "<<count;
        }
};

//int Employee::count; // default value zero
// delaring outside its scope(class)

int main(){
    Employee a,b,c;

    a.setData();
    a.getData();

    b.setData();
    b.getData();

    c.setData();
    c.getData();

}