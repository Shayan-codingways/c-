#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count; // if we just use count, then every object will have 1 count and count would alwyas be 1

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

//count is the static data member of class employee
int Employee::count; // default value zero
// declaring outside its scope(class)

int main(){
    Employee a,b,c;

    a.setData();
    a.getData();

    b.setData();
    b.getData();

    c.setData();
    c.getData();

}