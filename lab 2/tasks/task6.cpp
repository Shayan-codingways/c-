#include<iostream>
using namespace std;


class Employee{
    private:
        string first_name;
        string last_name;
        double monthly_salary;

    public:
        // constructor
        Employee(string first,string last, double sal){
            first_name=first;
            last_name=last;
            
            if(monthly_salary>0){
                monthly_salary=sal;
            }
            else{
                monthly_salary=sal;
            }
        }
        

        string get_firstname(){
            return first_name;
        }
        string get_lastname(){
            return last_name;
        }
        double get_salary(){
            return monthly_salary;
        }
        double get_yearlysalary(){
            return monthly_salary*12;
        }
        double get_raisedsalary(){
            return get_yearlysalary()*1.1;
        }
};

int main(){
    
    //objects instantiation
    Employee e1("Shayan","Anwar",2000.293937);
    Employee e2("Abdul","Rahim",1000);

    // Display yearly salaries 
    cout<<"The yearly salary for " << e1.get_firstname() << " " <<e1.get_lastname()<<" is: " <<e1.get_yearlysalary()<<endl;

    cout<<"The yearly salary for " << e2.get_firstname() << " " <<e2.get_lastname()<<" is: " <<e2.get_yearlysalary()<<endl<<endl;

    // Raised rates
    cout<<"The yearly raised salary for " << e1.get_firstname() << " " <<e1.get_lastname()<<" is: " <<e1.get_raisedsalary()<<endl;

    cout<<"The yearly salary for " << e2.get_firstname() << " " <<e2.get_lastname()<<" is: " <<e2.get_raisedsalary()<<endl;
    
    //In C++, the test application is typically the main function where you demonstrate the capabilities of the Employee class. In the provided C++ code, the main function serves as the test application.

}