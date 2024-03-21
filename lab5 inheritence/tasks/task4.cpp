#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Person{
    protected:
        string firstName;
        string lastName;
        int id;
    public:

        Person(string firstName, string lastName, int identification){

            // this keyword is used to differnetiate b/w instance and local variables. 

            // by addding this and arrow operator we are differentiating bw same named instance and local var.

            // this-> before first name makes it instance variable 
            this->firstName = firstName;
            this->lastName = lastName;
            this->id = identification;
        }

        void printPerson(){
            cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id <<     "\n";
        }

};

class Student: public Person{
    private:
        vector<int> testScores;

    public:
    
    // way of passing a values to base class constructor
       Student(string f, string l, int i, vector<int> scores) : Person(f,l,i){  
            
            for(int i=0; i<scores.size(); i++){
                testScores.push_back(scores[i]);
            }  
            
       }

       char calculate(){ 
            int i;
            int avg;
            int sum=0;
            for(i=0; i<testScores.size();i++){
                sum=sum+testScores[i];
            }
            cout<<endl<<sum<<endl;
            avg=sum/testScores.size()-1;

            if(avg<=100 && avg>=90){
                return 'O';
            }
            else if(avg<90 && avg>=80){
                return 'E';
            }
            else if(avg<80 && avg>=70){
                return 'A';
            }
            else if(avg<70 && avg>=55){
                return 'P';
            }
            else if(avg<55 && avg>=40){
                return 'D';
            }
            else if(avg<40){
                return 'T';
            }


       }

/*
* Function Name: calculate
* Return: A character denoting the grade.
*/
// Write your function here
};


int main(){
 

    //for constructor
    string firstName;
    string lastName;
    int id;
    int numScores;
    cout<<"Enter banem id , no of marks: "<<endl;
    cin >> firstName >> lastName >> id >> numScores;


    vector<int> scores;
    cout<<"Enter marks"<<endl;
    for(int i = 0; i < numScores; i++){
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }


    //s object holds address of new object
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson(); // use arrow operator bcz it is a pointer to access function for derefrencing. 
    cout << "Grade: " << s->calculate() << "\n";

}