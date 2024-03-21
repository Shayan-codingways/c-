// OOPi 3
#include<iostream>
using namespace std;


class Student {
    
    private:
        // so we cant change it further anywhere in program. 
        int erpID;
        string name;
        float cgpa;
        
    public:
        //if we are using set function, it's not necessary to write constructors in the program
    void setErp(int a){
            erpID=a;
        }
    void setCGPA(float c) { // setter
      cgpa = c;
    }
    void setName(string jfhgcjfhj) { // setter
      name = jfhgcjfhj;
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
// num=""

int main(){

    Student s1;
    cout<<"ERP: before setting"<<s1.getErpID()<<" Name: before setting"<<s1.getName()<<" CGPA: before setting"<<s1.getCGPA()<<endl;

    
    s1.setErp(27027);
    s1.setCGPA(5);
    s1.setName("Shayan");
    cout<<"ERP: "<<s1.getErpID()<<" Name: "<<s1.getName()<<" CGPA: "<<s1.getCGPA();

}