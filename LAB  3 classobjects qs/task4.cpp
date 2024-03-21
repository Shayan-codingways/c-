#include<iostream>
#include<vector>
#include<string>
using namespace std;

class menueitem{
    public:

    string item;
    string type;
    float price;

    menueitem(string it, string ty, float pr){
        item=it;
        type=ty;
        price=pr;
    }

};

class CoffeeShop{
    private:
        string name;
        vector <menueitem> menue;
        vector <string> orders;

    public:

    // Constructor to set the shop name and menu items
    CoffeeShop(string shopName, vector<menueitem> items) {
        name = shopName;
        menue = items;
    }

    void addorder(string o) {

        bool itemFound = false;
    
        for (int i = 0; i < menue.size(); i++) {
            if (menue[i].item == o) {
                orders.push_back(o); //adds to the end of vector
                itemFound = true;
                break;
            }
        }

        if (!itemFound) {
            cout << "Item not found in the menu." << endl;
       
        }
    }


    void fulfillorder(){
        if (orders.size()==0){
            cout<<"All orders have been fulfilled!"<<endl;
        }
        else{
            cout<<"The item is ready!"<<endl;
        }
    }


    vector<string> listorders() {
        
    cout << "Orders: ";
    for (const auto &order : orders) {
        cout << order << " ";
    }
    cout << endl;
    return orders;
    }

    float due_amount(){
        float sum =0;
        for(int i=0; i<orders.size(); i++){
            for(int j=0;j<menue.size();j++){
            if(orders[i]==menue[j].item){
                sum=sum+menue[j].price;
                break;
             }
            }
            
          }
          return sum;
    }

    string cheapest_item(){
        float temp;
        string cheap;
        for(int i=0; i<menue.size(); i++){
            for(int j=0;j<menue.size();j++){
            if(menue[i].price>menue[j].price){
                menue[i].price=menue[j].price;
                menue[i].item=menue[j].item;

             }
            }
            return menue[i].item;
            break;
            
          }

          
        

    }
    
   string drinks_only() {
    string drinks;
    for (int i = 0; i < menue.size(); i++) {
        if (menue[i].type == "Drink") {
            drinks += menue[i].item + " ";
        }
    }
    return drinks;
}

    


};

int main(){

   menueitem m1[5] = {
        menueitem("chicken", "food", 20.3),
        menueitem("Ghost", "Food", 222),
        menueitem("Tea", "Drink", 3),
        menueitem("Colddrink", "Drink", 12.4),
        menueitem("Rice", "Food", 23),
    };

    // Convert the array to a vector
    vector<menueitem> menuItems(m1, m1 + sizeof(m1) / sizeof(m1[0]));

    CoffeeShop c1("Shayan's Restaurant", menuItems);
    
    string order;
    int i,n;
    cout<<"How many items you want to order? "; 
    cin>>  n;

    for(i=0;i<n;i++){
        cout<<endl<<"What item to order? ";
        cin >> order;
        c1.addorder(order);
    }
    
    
    
    c1.listorders();
        

    cout<<endl;
    c1.fulfillorder();
    cout<<endl;
 

    cout<<"Due amount: "<<c1.due_amount()<<endl; 
    cout<<"Cheapest: "<<c1.cheapest_item()<<endl; 

    cout << "All Drinks: " << c1.drinks_only() << endl;
    
}