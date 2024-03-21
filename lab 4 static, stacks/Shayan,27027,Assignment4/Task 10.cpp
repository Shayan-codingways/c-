#include <iostream>

using namespace std;

struct ListNode {
    int value;
    ListNode* next;

    ListNode(int val){
        value=val; 
        next=nullptr;
    }
};

ListNode* reverseList(ListNode* head) {
    
    ListNode* reversed = nullptr;
    ListNode* current = head;
    while (current != nullptr) {
        ListNode* nextNode = current->next;
        current->next = reversed;
        reversed = current;
        current = nextNode;
    }
    return reversed;
}

ListNode* createList(int arr[], int n) {
    if (n == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* tail = head;
    for (int i = 1; i < n; ++i) {
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
    }
    return head;
}

void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    ListNode* head = createList(arr, n);

    cout << "Original linked list: ";
    printList(head);

    ListNode* reversedHead = reverseList(head);

    cout << "Reversed linked list: ";
    printList(reversedHead);

    return 0;
}
