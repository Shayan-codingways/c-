#include<iostream>
using namespace std;

class Invoice{
    
private:
    float part_number;
    string part_description;
    int quantity;
    int priceperitem;
    
public:

    
    void set_partNumber(int pno){
        part_number=pno;
    }
    void set_quantity(int quant){
        quantity=quant;
    }
    void set_priceperitem(int pi){
        priceperitem=pi;
    }
    void set_partdes(string pd){
        part_description=pd;
    }
    
    
    void display(){
        int abc=priceperitem*quantity;
        cout<<"The product " << part_number<<" " << part_description<< " with quantity " << quantity<<" costs: " << abc;  
    }
    

};


int main(){
    
    int pi, pno, quant;
    string pd;
    
    Invoice a;
    
    a.set_partNumber(222222);
    a.set_quantity(5);
    a.set_priceperitem(20);
    a.set_partdes("Green");
    a.display();
    
}