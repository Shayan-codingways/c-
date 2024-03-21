#include<iostream>
#include<string>
using namespace std;

class Date{
    
    private:
       //variables
       int day;
       int month;
       int year;
    
    public:
        // constuctor
        Date(int d, int m, int y){
            day=d;
            month=m;
            year=y;
        }

    // setter functions
    void set_day(int a){
        day=a;
    }
    void set_month(int b){
        month=b;
    }
    void set_year(int c){
        year=c;
    }

    // getter functions
    int get_day(){
        return day;
    }
    int get_month(){
        return month;
    }
    int get_year(){
        return year;
    }

    string formatdate(){
       cout<< "Today's date day/month/year: "<< day <<"/" << month << "/" << year;
    }



};

int main(){

    //prepare to pass values for constructor
    int a,b,c;

    cout<<"Enter Day, Month, and Year: ";
    cin >> a >> b >> c;

    if(b<1 || b>12){
         b=1;
    }
    
    //object instantiation with constructor
    Date today(a,b,c);  //i can get results only thorugh any public fuunction

    // display initialized values
    cout<<today.formatdate()<<endl;
    
    // setting values
    today.set_day(3);
    today.set_month(5);
    //today.set_year(2024);  //will print value given to constructor 
    cout<<today.formatdate()<<endl;
    
    


}