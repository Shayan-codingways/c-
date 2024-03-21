#include <iostream>
#include <vector>

using namespace std;

class ListNode {
public:
    int value;
    ListNode* next;
    ListNode(int val) : value(val), next(nullptr) {}
};

ListNode* createListFromArray(const vector<int>& arr) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int val : arr) {
        ListNode* newNode = new ListNode(val);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void printListReverseHelper(ListNode* head) {
    if (head == nullptr)
        return;
    printListReverseHelper(head->next);
    cout << head->value << " ";
}

void printListReverse(ListNode* head) {
    cout << "Linked list in reverse order: ";
    printListReverseHelper(head);
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    ListNode* head = createListFromArray(arr);
    printListReverse(head);
    return 0;
}

