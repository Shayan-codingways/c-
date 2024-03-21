/* heirarical */


#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Vehicles{

    public:
        vector<int> price;

        void set_price(){
            int p;
            cout<<"What's the price of your vehicle? "<<endl;
            cin>> p;
            price.push_back(p);
            
        }

};

class Car: public Vehicles{
    public:
        vector<int> seating_capacity;
        vector<int> no_doors;
        vector<string> fuel_type;

        void set_seat(){
            int s; 
            cout<<"seating capacity in Audi? ";
            cin >> s;
            seating_capacity.push_back(s);

        }
        void set_doors(){
            int d; 
            cout<<"No of doors in Audi ";
            cin >> d;
            no_doors.push_back(d);

        }
        void set_fuel(){
            string fuel; 
            cout<<"fuel type in Audi: ";
            cin >> fuel;
            fuel_type.push_back(fuel);

        }
    
   
    
};

class Audi: public Car{
    private: 
        vector<string> Model_type;

    public:

        void set_model_type(){
            string model; 
            cout<<"What's the model of Audi? ";
            cin >> model;
            Model_type.push_back(model);

        }

        void Display(){
            for(int i=0; i<Model_type.size(); i++){
                cout<<"The model type of Audi: "<< Model_type[i]<<endl<< "Its seating capacity, no of doors, and fuel type respectively: "<<seating_capacity[i]<<" | "<<no_doors[i]<<" | "<<fuel_type[i]<<endl<<"Price "<<price[i];
                cout<<endl;
            } 
        }
    
    
};


class Motorcycle: public Vehicles{
    public: 
        vector<int> no_cylinders;
        vector<int> no_gears;
        vector<int> no_wheels;

        void set_cylinders(){
            int cy; 
            cout<<"No of cylinders in Yamaha? ";
            cin >> cy;
            no_cylinders.push_back(cy);

        }
        void set_gears(){
            int g; 
            cout<<"No of gears in Yamaha? ";
            cin >> g;
            no_gears.push_back(g);

        }
        void set_wheels(){
            int w; 
            cout<<"No of wheels in Yamaha? ";
            cin >> w;
            no_wheels.push_back(w);

        }

    
    
    
};

class Yamaha: public Motorcycle{
    private: 
        vector<string> make_type;
    
    public:
        void set_make_type(){
            string model; 
            cout<<"What's the model of Yamaha? ";
            cin >> model;
            make_type.push_back(model);

        }

        void Display(){
            for(int i=0; i<make_type.size(); i++){
                cout<<"The model type of Yamaha: "<< make_type[i]<<endl<< "Its no of cylinders, no of gears, and no of wheels respectively:  "<<no_cylinders[i]<<" | "<<no_gears[i]<<" | "<<no_wheels[i]<<endl<<"Price: "<<price[i];
                cout<<endl;
            } 
        }
};



int main(){
     
    Audi o1;
    Yamaha o2;
    

    int n;
    cout<<"Please tell how many vehicles you sold: " <<endl;
    cin>>n;
    

    char select;
    for(int i=0; i<n; i++){
        cout<<"is it Audi(Y) or is it Yamaha(N)? "<<endl;
        cin >> select;
  
        if(select=='Y' || select=='y'){
            o1.set_model_type();    
            o1.set_seat();
            o1.set_doors();
            o1.set_fuel();
            o1.set_price(); 
        }

        else if(select == 'n' || select == 'N'){
            o2.set_make_type();
            o2.set_cylinders();
            o2.set_gears();
            o2.set_wheels();
            o2.set_price();
        }
    }
    
    o1.Display();
    cout<<endl<<endl;
    o2.Display();

}