#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class ShoppingCart {
    vector<string> items;

public:
    void addItem(const string& item) {
        items.push_back(item);
    }

    void removeItem(const string& item) {
        
        auto here_itis = find(items.begin(), items.end(), item); // Find the item in the vector
        //here_itis auto is an address here
        
        if (here_itis != items.end()) { // If item is found 
        // this condition tells that end is reached but item not found 
            items.erase(here_itis); // Remove the item
            cout << "Item '" << item << "' removed from cart." << endl;
        } 
        else {
            cout << "Item '" << item << "' not found in cart." << endl;
        }
    }

    void displayCart() {
    cout << "Shopping Cart:" << endl;
    for (int i = 0; i < items.size(); i++) {
        cout << items[i] << endl;
    }
}


};

int main() {
    ShoppingCart c1;
    int choice;
    cout << "Welcome to Shopping Cart" << endl;
    
        cout << "1. Add item to cart" << endl;
        cout << "2. Remove item from cart" << endl;
        cout << "3. View cart" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    

    string item;
    while(choice!=4){
    
        switch (choice) {
            case 1:
                cout << "Add item to cart: " << endl;
                cout << "Enter item: ";
                cin >> item;
                c1.addItem(item);
                break;
            case 2:
                cout << "Remove item from cart: " << endl;
                cout << "Enter item: ";
                cin >> item;
                c1.removeItem(item);
                break;
            case 3:
                c1.displayCart();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                break;
        }
        
        cout << "1. Add item to cart" << endl;
        cout << "2. Remove item from cart" << endl;
        cout << "3. View cart" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    }

    return 0;
}