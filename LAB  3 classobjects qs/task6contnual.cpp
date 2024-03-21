#include <iostream>
#include <string>

using namespace std;

class CoffeeShop {
private:
    string name;
    string menu[10][3]; // 2D array to store menu items (name, type, price)
    string orders[10]; // Array to store orders
    int orderCount;

public:
    CoffeeShop(string n){                                             // Constructor
        name = n;
        orderCount = 0;
    }
    string addOrder(string itemName){                                // adding order
        for(int i = 0; i < 10; ++i){
            if(menu[i][0] == itemName){
                orders[orderCount++] = itemName;
                return "Order added successfully!";
            }
        }
        return "This item is currently unavailable!";
    }
    string fulfillOrder(){                                            // fulfilling the order
        if(orderCount > 0){
            orderCount--;
            return "The item is ready!";
        } 
		else{
            return "All orders have been fulfilled!";
        }
    }
    string listOrders(){                                             // listing orders that I took in my above method
        string orderList;
        for(int i = 0; i < orderCount; ++i){
            orderList += orders[i] + " ";
        }
        return orderList;
    }
    string dueAmount(){                                             // Method to calculate due amount (using string comparison)
        string totalAmount = "0.0";
        for (int i = 0; i < orderCount; ++i){
            for (int j = 0; j < 10; ++j){
                if (orders[i] == menu[j][0]){
                    totalAmount += "+" + menu[j][2];             // I Concatenated(combined) prices as strings
                }
            }
        }
        return totalAmount;
    }
    string cheapestItem(){                                      // Method to find the cheapest item on the menu (using string comparison)
        string minPrice = menu[0][2];
        string cheapestItemName = menu[0][0];
        for(int i = 1; i < 10; ++i){
            if(menu[i][2] < minPrice){
                minPrice = menu[i][2];
                cheapestItemName = menu[i][0];
            }
        }
        return cheapestItemName;
    }
    string drinksOnly(){                                        // Method to get only drink items from the menu
        string drinkItems;
        for(int i = 0; i < 10; ++i){
            if(menu[i][1] == "drink"){
                drinkItems += menu[i][0] + " ";
            }
        }
        return drinkItems;
    }
    string foodOnly(){                                          // Method to get only food items from the menu
        string foodItems; 
        for(int i = 0; i < 10; ++i){
            if (menu[i][1] == "food"){
                foodItems += menu[i][0] + " ";
            }
        }
        return foodItems;
    }
    void addItemToMenu(string itemName, string type, string price){         // Method to add item to the menu  
        for (int i = 0; i < 10; ++i) {
            if (menu[i][0].empty()) {
                menu[i][0] = itemName;
                menu[i][1] = type;
                menu[i][2] = price;
                break;
            }
        }
    }
};

int main() {
    
    CoffeeShop myCoffeeShop("MyCoffeeShop");

    myCoffeeShop.addItemToMenu("Coffee", "drink", "10");
    myCoffeeShop.addItemToMenu("Tea", "drink", "15");
    myCoffeeShop.addItemToMenu("Sandwich", "food", "40");
    myCoffeeShop.addItemToMenu("Cake", "food", "60");
 
    cout << myCoffeeShop.addOrder("Coffee") << endl;
    cout << myCoffeeShop.addOrder("Tea") << endl;
    cout << myCoffeeShop.addOrder("Sandwich") << endl;
    cout << myCoffeeShop.addOrder("Cake") << endl;
    cout << myCoffeeShop.addOrder("Paratha") << endl; // This item is not available

    cout << "Orders: " << myCoffeeShop.listOrders() << endl;  // Listing orders

    cout << myCoffeeShop.fulfillOrder() << endl;          // Fulfill orders
    cout << myCoffeeShop.fulfillOrder() << endl;
    cout << myCoffeeShop.fulfillOrder() << endl;
    cout << myCoffeeShop.fulfillOrder() << endl;
    cout << myCoffeeShop.fulfillOrder() << endl; // All orders have been fulfilled

    cout << "Due amount: $" << myCoffeeShop.dueAmount() << endl;
    cout << "Cheapest item: " << myCoffeeShop.cheapestItem() << endl;
    cout << "Drinks only: " << myCoffeeShop.drinksOnly() << endl;
    cout << "Food only: " << myCoffeeShop.foodOnly() << endl;
}