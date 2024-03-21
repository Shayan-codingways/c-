#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

class Polynomial{

   private:
      int a;
      int b;
      int c ;
      
    public:
    Polynomial(int A,int B,int C){
        a=A;
        b=B;
        c=C;
    }
    //deafualt constructor for r
    Polynomial(){
        a=0;
        b=0;
        c=0;
    }

    
    int eval(int x){
        return ((a*(x*x)) + (b*x) + c);
    }
    
    string format(int a, int b, int c){
       cout<< a<<"x^2 + " << b << "x + " << c << endl;  
    }

    // 4th point
    int get_a(){
        return a;
    }
    int get_b(){
        return b;
    }
    int get_c(){
        return c;
    }

    //operator overloading 
    //(return type (class polynomial) operator(keyword) operator sign (argument passed))
    Polynomial operator + (Polynomial x){

        // declared datatype to hold value and return
        Polynomial y; //temporary object

        //r=p+q
        //data member of y object (y.a)= data member of c1(a) + x.a(data member of c2)
        // a, b ,c are of 1st member added(p in this case)
        // x.a(variable passed has it's a, b c accesed)
        y.a=a + x.a;  
        y.b=b + x.b;
        y.c=c + x.c;

        return y;
    }

     Polynomial operator - (Polynomial x){

        // declared datatype to hold value and return
        Polynomial q; //temporary object

        //r=p+q
        //data member of y object (y.a)= data member of c1(a) + x.a(data member of c2)
        // a, b ,c are of 1st member added(p in this case)
        // x.a(variable passed has it's a, b c accesed)
        q.a=a - x.a;  
        q.b=b - x.b;
        q.c=c - x.c;

        return q;
    }

    // point 5 (overload brackets)
    int& operator [](int index){
       int *ptr;
       if(index==0){
           ptr=&a;
           return *ptr;
        }
        else if(index==1){
           ptr=&b;
           return *ptr;
        }
        else if(index==2){
           ptr=&c;
           return *ptr;
        }
        else{
           exit(index);
        }

    } 

    //overload asssignment (==)

    bool operator == (Polynomial x){

        bool is_equal=false;

        if(a==x.a && b==x.b && c==x.c){
            is_equal=true;
            return is_equal;
        }
        else{
            return is_equal;
        }
        

    }

};

int
main (){
     Polynomial poly1(1,1,1);
     
     int x;
     int res;

    cout<< "Please Enter x for evaluating Polynomial: ";
    cin>>x;
    res=poly1.eval(x);
     
    cout<<res<<endl;
    cout<<"______________________________________________"<<endl;

    // point 4 (operator overloading)
    Polynomial p(2,3,4);
    Polynomial q(7,6,22);
    Polynomial r;  //uses the other default constructor
    r=p+q; //p.add(q) (p is already available to this function and q is passed) (y passed in r here)

    Polynomial s(2,3,4);
    Polynomial t(7,6,22);
    Polynomial u(23,34,34);
    Polynomial z;
    Polynomial e;
    z=u + s + t;
    e=u-(s+t);


    cout<<"The adddition of polynomials p+q: "<<r.format(r.get_a(),r.get_b(),r.get_c());
    cout<<"The adddition of polynomials u+s+t: "<<r.format(z.get_a(),z.get_b(),z.get_c());
    cout<<"The subtraction of polynomials s and t from u: "<<r.format(e.get_a(),e.get_b(),e.get_c());

    // r=p+q+z; q and z parameters and p original

    // [ bracket overload]
    cout<<"______________________________________________"<<endl;
    Polynomial quad(22,34,23);

    cout<<"quad[0]: " <<quad[0] << endl;
    cout<<"quad[1]: " <<quad[1] << endl;
    cout<<"quad[2]: " <<quad[2] << endl;
    // cout<< quad[3] << endl;  // exits


    // == overload;
      cout<<"______________________________________________"<<endl;
    Polynomial quad1(2,2,3);
    Polynomial quad2(2,2,3);
    Polynomial quad3(2,6,3);

    if(quad1==quad2){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not Equal";
    }
    
    if(quad1==quad3){
        cout<<"Equal"<<endl;
    }
    else{
        cout<<"Not Equal";
    }

}