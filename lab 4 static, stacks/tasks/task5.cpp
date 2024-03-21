#include<iostream>
#include<math.h>
using namespace std;


class Draw{

    float side1, side2, radius, base, angle;

    public:
      
      void set_side1(){
        cout<<"Enter value for rectangle side 1: ";
        cin >> side1;

      }
      float get_Side1(){
        return side1;
      }

      void set_side2(){
        cout<<"Enter value for rectangle side 2: ";
        cin >> side2;
      }
      float get_Side2(){
        return side2;
      }

      void set_radius(){
         cout<<"Enter value for radius: ";
         cin >> radius;
      }
      float get_radius(){
        return radius;
      }

      void set_base(){
         cout<<"Enter value for rhombus base: ";
         cin >> base;
      }
      float get_base(){
        return base;
      }

      void set_angle(){
         cout<<"Enter value for rhombus angle: ";
         cin >> angle;
      }
      float get_angle(){
        return angle;
      }
    
    
};

class DrawRectangle: public Draw{
  
    float a;

    public:
    void area(){
       a=get_Side1()*get_Side2();
       cout<<"Area of Recatngle: "<<a<<endl;
    }
};

class DrawRhombus: public Draw{
    float a;
    public:
    void area(){
       a=(get_base()*get_base())*(sin(get_angle()));
       cout<<"Area of Rhombus: "<<a<<endl;
    }


};

class DrawCircle: public Draw{
    float a;
    public:
    void area(){
       a=3.14*(get_radius()*get_radius());
       cout<<"Area of Circle: "<<a;
    }      

};

int main(){
     DrawRectangle r1;
     r1.set_side1();
     r1.set_side2();
     r1.area();
     
     DrawRhombus rh1;
     rh1.set_base();
     rh1.set_angle();
     rh1.area();

     DrawCircle c1;
     c1.set_radius();
     c1.area();


}