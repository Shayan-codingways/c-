#include <iostream>
#include <vector>

using namespace std;

class ArrayStack {
protected:
    vector<int> data;

public:
    void push(int item) {
        data.push_back(item);
    }

    int pop() {
        if (is_empty()) {
            throw out_of_range("pop from an empty stack");
        }
        int item = data.back();
        data.pop_back();
        return item;
    }

    int peek() {
        if (is_empty()) {
            throw out_of_range("peek from an empty stack");
        }
        return data.back();
    }

    bool is_empty() {
        return data.empty();
    }
};

class SortedStack : public ArrayStack {
public:
    void push(int item) {
        if (is_empty() || item >= peek()) {
            ArrayStack::push(item);
        } else {
            ArrayStack temp_stack;
            while (!is_empty() && peek() > item) {
                temp_stack.push(ArrayStack::pop());
            }
            ArrayStack::push(item);
            while (!temp_stack.is_empty()) {
                ArrayStack::push(temp_stack.pop());
            }
        }
    }
};

int main() {
    SortedStack sorted_stack;
    vector<int> elements = {42, 27, 39, 3, 55, 81, 11, 9, 0, 72};

    for (int i; i < elements.size(); i++) {
        sorted_stack.push(elements[i]);
        cout << "State of the stack after adding " << elements[i] << ": ";
        for (int item : sorted_stack.data) {
            cout << item << " ";
        }
        cout << endl;
    }

    return 0;
}
