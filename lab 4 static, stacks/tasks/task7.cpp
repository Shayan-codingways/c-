#include<iostream>
#include<vector>
using namespace std;

class Student{
    public:

    string name, gender;
    int age;
  

    void set_name(){
        cout<<"Your name? " <<endl;
        cin >> name;
 
     }
    void set_gender(){
        cout<<"Your gender? " <<endl;
        cin >> gender;
    }


    void set_age(){
        cout<<"Your age? " <<endl;
        cin >> age;
    }

   
     void Display_stu(){
        cout<<"_______________________________________________________"<<endl;
        cout<<"Name: " << name <<"   Gender: " << gender <<"   Age: "<<age<<endl;
    }
};



class compute: public Student{

  vector <string> courses;
  vector<int> credit;
  vector <float> marks;
  vector <string> grades;
  vector <float> gradepts;
  static int semester;
  static float gpa_sum;

public:
     void set_courses(){
        semester++;

        string a;
        int b;
        int n;
        int sum_pts=0;

        cout<<"Number of courses taken? "<<endl;
        cin>>n;   
        for(int i=0; i<n;i++ ){
             cout<<"Your course and credithours:"<<endl;
            cin>>a;
            cin>>b;
            courses.push_back(a);
            credit.push_back(b);
        }

     }

     void set_marks(){
        float a;
        cout<<"Marks for courses: ";
        for(int i=0; i<courses.size();i++ ){
            cin>>a;
            marks.push_back(a);

        }
     }

      void get_grade(){

        grades.resize(courses.size());
        gradepts.resize(courses.size());


        for(int i=0; i<courses.size(); i++){
            if(marks[i]>=92.5){
                grades[i]="A";
                gradepts[i]=4;
            }
            else if(marks[i]>=80 && marks[i]<92.5){
                grades[i]="B";
                gradepts[i]=3.4;
            }
            else if(marks[i]>=65 && marks[i]<80){
                grades[i]="C";
                gradepts[i]=2.2;
            }
            else if(marks[i]<65){
                grades[i]="F";
                gradepts[i]=0;
            }
        }
    }

    int sum_credit(){
      int a=0;
      for(int i=0; i<credit.size();i++){
        a=a+credit[i];
      }
      return a;
    }

    float gpa(){

        float a=0;

        for(int i=0; i<credit.size(); i++){
            a=a+(credit[i]*gradepts[i]);
        }

        float gpa;

        int credit_sum=sum_credit();
        gpa= a/credit_sum;
        gpa_sum+=gpa;
        
        return gpa;
    }

    float cgpa(){
        float cgpa;
        cgpa=gpa_sum/semester;
        return cgpa;
    }

    void display_results(){
    cout<<"Semester no: "<<semester<<endl;
    cout<<"Your Courses|Marks|grade|grade point --> " <<endl;
        for(int i=0; i<courses.size(); i++){
             cout<<courses[i]<< "|" <<marks[i] << "|" <<grades[i]<< "|"<< gradepts[i]<<endl;

        }

        cout<<endl<<"Your gpa is: "<<gpa();
        cout<<endl<<"Your cgpa is: "<<cgpa();
    }



};

int compute::semester;
float compute :: gpa_sum;

int main(){
    compute s1;

    s1.set_name();
    s1.set_gender();
    s1.set_age();
    s1.set_courses();
    s1.set_marks();
    s1.get_grade(); 
    s1.Display_stu();
    s1.display_results();

    compute s2;
    cout<<"For semester 2: ";
    s2.set_courses();
    s2.set_marks();
    s2.get_grade();
    s2.Display_stu();
    s2.display_results();


}