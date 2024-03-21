#include <iostream>
#include<cstdio>
using namespace std;

struct menultumType
{
    string menuitem;
    double menueprice;
};

int main()
{ 
    float grossSum;
    string menuelist[8] = {"Plain egg - $1.45", "Bacon and Egg - $2.45", "Muffin - $0.99", "French Toast - $1.99", "Fruit Basket - $2.49", "Cereal - $0.69", "Coffee - $0.50", "Tea - $0.75"};
    int i;
    string select[8];
    cout<<"Welcome to Shayan's Restaurant" << endl;

    cout << "Select from the following: " << endl;
    for (i = 0; i < 8; i++)
    {
        cout << i+1 << ". "<< menuelist[i] << endl;
    };
    
    int n;
    cout << endl;
    cout <<"How many food items you want to order: ";
    cin >> n;
    
    menultumType newcustomer[n];
    
    float sum=0;
    cout<<endl<<"Type the number corresponding to the items exact as menue card {example--> Enter 1 to select Plain egg}: " << endl;

    string selected[n];
    for ( i = 0; i <n; i++)
    {
        cin >> newcustomer[i].menuitem;

        if(newcustomer[i].menuitem=="1"){
            newcustomer[i].menuitem="Plain egg $";
            newcustomer[i].menueprice=1.45;
            sum=sum+newcustomer[i].menueprice;
            cout<<"Selected "<<newcustomer[i].menuitem<<newcustomer[i].menueprice;
        }
        if(newcustomer[i].menuitem=="2"){
            newcustomer[i].menuitem="Bacon and Egg $";
            newcustomer[i].menueprice=2.45;
            sum=sum+newcustomer[i].menueprice; 
          cout<<"Selected "<<newcustomer[i].menuitem<<newcustomer[i].menueprice;
        }
        if(newcustomer[i].menuitem=="3"){
            newcustomer[i].menuitem="Muffin $";
            newcustomer[i].menueprice=0.99;
            sum=sum+newcustomer[i].menueprice; 
            cout<<"Selected "<<newcustomer[i].menuitem<<newcustomer[i].menueprice;
        }
        if(newcustomer[i].menuitem=="4"){
            newcustomer[i].menuitem="French Toast $";
            newcustomer[i].menueprice=1.99;
            sum=sum+newcustomer[i].menueprice; 
           cout<<"Selected "<<newcustomer[i].menuitem<<newcustomer[i].menueprice;
        }
        if(newcustomer[i].menuitem=="5"){
            newcustomer[i].menuitem="Fruit Basket $";
            newcustomer[i].menueprice=2.49;
            sum=sum+newcustomer[i].menueprice; 
            cout<<"Selected "<<newcustomer[i].menuitem<<newcustomer[i].menueprice;
        }
        if(newcustomer[i].menuitem=="6"){
            newcustomer[i].menuitem="Cereal $";
            newcustomer[i].menueprice=0.69;
            sum=sum+newcustomer[i].menueprice; 
            cout<<"Selected "<<newcustomer[i].menuitem<<newcustomer[i].menueprice;
        }
        if(newcustomer[i].menuitem=="7"){
            newcustomer[i].menuitem="Coffee $";
            newcustomer[i].menueprice=0.50;
            sum=sum+newcustomer[i].menueprice; cout<<"Selected "<<newcustomer[i].menuitem<<newcustomer[i].menueprice;
        }
        if(newcustomer[i].menuitem=="8"){
            newcustomer[i].menuitem="Tea $";
            newcustomer[i].menueprice=0.75;
            sum=sum+newcustomer[i].menueprice;cout<<"Selected "<<newcustomer[i].menuitem<<newcustomer[i].menueprice; 
        }
    cout<<endl;
    }

    grossSum=sum*1.05;
    
    cout << endl<<"___________________________________________"<< endl;
    cout << "Welcome to my Restaurant" << endl;
    for(i=0;i<n;i++){
        cout<<newcustomer[i].menuitem<<newcustomer[i].menueprice<<endl;
    }
    cout<< "Tax: "<< printf("%0.2f",0.05*sum)<<endl;
    cout<<"Amount due: " << printf("%0.2f",grossSum);



    return 0;
}