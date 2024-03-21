#include<iostream>
using namespace std;


class Father{

    public:

      int x;

      void set_x(int a){
          x=a;
      }

      void display(){
        cout<<"The value of x is: "<< x;
      }
};

class Son: public Father{

    int y;

    public:

    void set_y(int a){
          y=a;
    }

    void display(){
        cout<<"The value of y is: "<< x;
    }

};


int main(){
   Son obj;

   obj.set_x(5);
   obj.set_y(6);
   obj.display(); 
   // prints son's due overriden bcz of son's object

}

/*
Father is the base class with a function called display.

Son is the derived class that inherits from Father and overrides the displayMessage function with a different implementation.

In the main function, an object of the Son class is created, and the overridden function is called. 

This demonstrates polymorphism, as the function called is determined at runtime based on the actual type of the object.
*/