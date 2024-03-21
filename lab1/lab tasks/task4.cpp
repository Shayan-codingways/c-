#include <iostream>
#include<cstdio>
using namespace std;

struct menultumType
{
    string menuitem;
    double menueprice;
    string menuelist[8] = {"Plain egg - $1.45", "Bacon and Egg - $2.45", "Muffin - $0.99", "French Toast - $1.99", "Fruit Basket - $2.49", "Cereal - $0.69", "Coffee - $0.50", "Tea - $0.75"};
};


int main()
{ 
    menultumType newcustomer;
    int i;
    string select[8];
    
    cout << "Select from the following: " << endl;
    for (i = 0; i < 8; i++)
    {
        cout << i+1 << ". "<< newcustomer.menuelist[i] << endl;
    };
    
    int n;
    cout << endl;
    cout <<"How many food items you want to order: ";
    cin >> n;
    float sum=0;
    cout<<endl<<"Type the number of item you want to select: " << endl;

    string selected[n];
    for ( i = 0; i <n; i++)
    {
        cin >> newcustomer.menuitem;

        if(newcustomer.menuitem=="1"){
            selected[i]="Plain egg $1.45";
            newcustomer.menueprice=1.45;
            sum=sum+newcustomer.menueprice;
            
        }
        if(newcustomer.menuitem=="2"){
            selected[i]="Bacon and Egg $2.45";
            newcustomer.menueprice=2.45;
            sum=sum+newcustomer.menueprice; 
          
        }
        if(newcustomer.menuitem=="3"){
            selected[i]="Muffin $0.99";
            newcustomer.menueprice=0.99;
            sum=sum+newcustomer.menueprice; 
            
        }
        if(newcustomer.menuitem=="4"){
            selected[i]="French Toast $1.99";
            newcustomer.menueprice=1.99;
            sum=sum+newcustomer.menueprice; 
           
        }
        if(newcustomer.menuitem=="5"){
            selected[i]="Fruit Basket $2.49";
            newcustomer.menueprice=2.49;
            sum=sum+newcustomer.menueprice; 
            
        }
        if(newcustomer.menuitem=="6"){
            selected[i]="Cereal $0.69";
            newcustomer.menueprice=0.69;
            sum=sum+newcustomer.menueprice; 
            
        }
        if(newcustomer.menuitem=="7"){
            selected[i]="Coffee $0.50";
            newcustomer.menueprice=0.50;
            sum=sum+newcustomer.menueprice; 
        }
        if(newcustomer.menuitem=="8"){
            selected[i]="Tea $0.75";
            newcustomer.menueprice=0.75;
            sum=sum+newcustomer.menueprice; 
        }
    
    }

    float gross=sum*1.05;


    //display

    cout << endl<<"___________________________________________"<< endl;
    cout << "Welcome to my Restaurant" << endl;
    for(i=0;i<n;i++){
        cout<<selected[i]<<endl;
    }
    cout<< "Tax: "<< printf("%0.2f",0.5*sum)<<endl;
    cout<<"Amount due: " << printf("%0.2f",gross);



    return 0;
}