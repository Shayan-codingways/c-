// oopi 1

#include<iostream>
using namespace std;


class Student {
    
    private:
        // so we cant change it further anywhere in program. 
        //can only access with constructors/ setter /getters
        int erpID;
        string name;
        float cgpa;
        
    public:
        Student(int id, string n, float c) { // constructor (initialize value)
            erpID = id;
            name = n;
            cgpa = c;
        }
        
        
    void setErp(int a){
      erpID=a;
    }
    void setCGPA(float c) { // setter
      cgpa = c;
    }
    void setName(string d) { // setter
      name = d;
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

    int a=7;
    float b=0.45;
    string n="poyon oil";

    Student s1(a,n,b); //object instantiation (along with constructore)
    cout<<"ERP: "<<s1.getErpID()<<" Name: "<<s1.getName()<<" CGPA: "<<s1.getCGPA()<<endl; // prints initialized values


    s1.setErp(27027);
    s1.setCGPA(5);
    s1.setName("Shayan");
    cout<<"ERP: "<<s1.getErpID()<<" Name: "<<s1.getName()<<" CGPA: "<<s1.getCGPA();
}
