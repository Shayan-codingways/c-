#include <iostream>
#include <set>
using namespace std;

class IntegerSet {
private:
    set<int> integers; //our set

public:
    void addInteger(int num) {
        
        if(*(integers.find(num))!=num){
            integers.insert(num);
            cout<< num << " added successfully." << endl;
        }
        else{
            cout<<num <<" already in the list" <<endl;
        }
    }

    void removeInteger(int num) {
        auto find = integers.find(num);
        if (find != integers.end()) {
            integers.erase(find);
            cout<< num << " removed successfully." << endl;
        } 
        else {
            cout << "Integer not found." << endl;
        }
    }

    void displayIntegers() const {
        cout << "Integers in the set:" << endl;
        for (auto num : integers) {
            cout << num << " ";
        }
        cout << endl;
    }
    //n the displayIntegers() function, the integers are iterated over using a range-based for loop. Since the elements in the std::set are already sorted in ascending order, iterating over them directly will ensure that they are displayed in ascending order when printed to the console
};

int main() {
    IntegerSet obj;

    // Example usage
    obj.addInteger(5);
    obj.addInteger(10);
    obj.addInteger(3);
    obj.addInteger(4);
    obj.addInteger(10); // Duplicate, will not be added
    obj.addInteger(3);
    obj.addInteger(7);
    
    cout<<endl;
    obj.displayIntegers();
    
    cout<<endl;
    obj.removeInteger(3);
    obj.removeInteger(10);
    obj.removeInteger(11);
    
    cout<<endl;
    obj.displayIntegers();

    return 0;
}
