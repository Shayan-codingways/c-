// OOPi 2
#include<iostream>
using namespace std;


class Student {
    
    private:
        // so we cant change it further anywhere in program. 
        int erpID;
        string name;
        float cgpa;
        
    public:
        // Student(int id, string n, float c) { // constructor
        //     erpID = id;
        //     name = n;
        //     cgpa = c;
        // }
        
        //if we are using set function, it's not necessary to write constructors in the program
    void setErp(int a){
            erpID=a;
        }
    
    int getErpID() { // getter
       return erpID;
    }
    
    string getName() { // getter
       return name;
    }
    
    float getCGPA() { // getter
       return cgpa;
    }
    
}; 

int main(){

    int a=27027; //not passed to function(Set)

    Student s1; //object instantiate without passing values to constructor
    //constructor has some values initialized and will print below
    cout<<"ERP: "<<s1.getErpID()<<" Name: "<<s1.getName()<<" CGPA: "<<s1.getCGPA(); // default values by constructor

    //null is ""
}
