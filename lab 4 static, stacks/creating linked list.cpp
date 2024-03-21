#include<iostream>

using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

int main() {
    // Creating three nodes
    Node* head = new Node();  // Head node has address of new node created
    Node* second = new Node(); // second node has address of next node.
    Node* third = new Node(); 

    // Assigning data to the nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;  // Marking the end of the linked list

    // Displaying the linked list
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    return 0;
}
