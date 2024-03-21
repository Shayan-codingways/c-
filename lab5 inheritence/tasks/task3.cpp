#include<iostream>
#include<string>

using namespace std;

class Student{
    int id;
    string name;

    public:
    void get_studentdetails(){
        name="Shayan";
        id=27027;
        cout<<"Student details: "<<endl;
            cout<<"Name: "<< name;
            cout<<"id: "<<id;
        }

};

class marks: public Student{
    protected:
    int marks_oop, marks_pf, marks_ds, marks_db;

    public:
    void get_marks(){
        
        marks_oop=34;
        marks_pf=45;
        marks_ds=56;
        marks_db=87;
       
        cout<<"The marks in each subject "<<endl;
        cout<<marks_oop<<endl<<marks_ds<<endl<<marks_db<<endl<<marks_pf;

    }

};

class result: public marks{
   protected:
   int total_marks;
   double avg_marks;

   public:
   void display(){

      total_marks=marks_oop+marks_db+marks_ds+marks_pf;
      avg_marks=total_marks/4;
      
      cout<<"              Result:          "<<endl;
      cout<<"Total Marks: " <<total_marks<<endl;
      cout<<"Average Marks: "<<avg_marks;

   }

};


int main(){
    result s1;

        
    s1.get_studentdetails();
    cout<<endl;
    s1.get_marks();
    cout<<endl;
    s1.display();
    

}