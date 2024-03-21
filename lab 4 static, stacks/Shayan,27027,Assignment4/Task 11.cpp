#include <iostream>

using namespace std;

class CustomStack {
private:
    class StackNode {
    public:
        int value;
        StackNode* next;
        StackNode(int val) : value(val), next(nullptr) {}
    };
    StackNode* head;

public:
    // Default constructor
    CustomStack() : head(nullptr) {}

    // Copy constructor for deep copy
    CustomStack(const CustomStack& other) : head(nullptr) {
        if (other.head) {
            StackNode* current = other.head;
            StackNode* prev = nullptr;
            while (current) {
                StackNode* newNode = new StackNode(current->value);
                if (!head) {
                    head = newNode;
                } else {
                    prev->next = newNode;
                }
                prev = newNode;
                current = current->next;
            }
        }
    }

    // Destructor
    ~CustomStack() {
        while (head) {
            StackNode* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Push operation
    void push(int val) {
        StackNode* newNode = new StackNode(val);
        newNode->next = head;
        head = newNode;
    }

    // Pop operation
    void pop() {
        if (!isEmpty()) {
            StackNode* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return head == nullptr;
    }

    // Print the stack
    void print() const {
        StackNode* current = head;
        while (current) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    // Create an original stack
    CustomStack originalStack;
    originalStack.push(1);
    originalStack.push(2);
    originalStack.push(3);

    // Copy the original stack using the copy constructor
    CustomStack copiedStack {originalStack};

    // Pop from original stack and print both stacks
    cout << "Original stack: ";
    originalStack.pop();
    originalStack.print();
    cout << "Copied stack: ";
    copiedStack.print();

    return 0;
}

