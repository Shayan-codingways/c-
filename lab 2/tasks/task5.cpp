#include<iostream>
using namespace std;

class glass{

    public:

    int liquid_level;
    char refill;

    // constructor
    glass(int lq_lev){
        liquid_level=lq_lev;
    }


    void Drink(int milliliters) {
        liquid_level = liquid_level - milliliters;

        if (liquid_level < 100) {
            cout<<"Your drink is abt to end! Should I refill? (Y/N) ";
            cin >> refill;


            if(refill=='Y'){
               Refill();
            }
            else{
               cout<<"Okay"<<endl;
            }

        }
    }


    void Refill() {
        liquid_level = 200;
    }


};

int main(){
   // object instantiate  
   // Glass() : LiquidLevel(200){} --> another way(but within class)
   glass a(200);
            cout << "What amount of liquid you have drank: ";

   int command=1;
   while (command){

        cout << "Enter 1 to drink and anyother number to exit(not drink) ";
        cin >> command;

        if (command != 1) {
            break;
        }

        else if (command == 1){

        
            int milliliters;
            cout << "What amount of liquid you have drank: ";
            cin >> milliliters;
            
            if(milliliters>245){
                cout<<"Are you kidding!";
                break;
            }

            a.Drink(milliliters);

            // Display the current liquid level in the glass
            cout << "Current liquid level: " << a.liquid_level << "ml" << endl;
         
        } 
      
    }
    return 0;

return 0;
}