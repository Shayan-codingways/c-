#include<iostream>
#include<math.h>
using namespace std;

class Circle{
    private:
       float radius;
    public:
       Circle(float r){
        radius=r;
       }

    float get_Area(){
        return (3.14* pow(radius,2));
    }

    float get_Perimeter(){
        return (2*3.14*radius);
    }

};

int main(){
    float r;
    cout<<"Input radius: ";
    cin>>r;

    Circle c(r);

    cout<<endl<<"Area: "<<printf("%0.5f",c.get_Area())<< endl <<"Perimter: "<< printf("%0.5f",c.get_Perimeter());

   
}