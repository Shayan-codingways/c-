#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class PalindromeChecker {
public:
    stack<char> charStack;
    queue<char> charQueue;

public:
    void pushCharacter(char ch) {
        charStack.push(ch);
    }

    void enqueueCharacter(char ch) {
        charQueue.push(ch);
    }

    char popCharacter() {
        char ch = charStack.top();
        charStack.pop();
        return ch;
    }

    char dequeueCharacter() {
        char ch = charQueue.front();
        charQueue.pop();
        return ch;
    }
};

int main() {
    string inputString;
    cout << "Input a string: ";
    getline(cin, inputString);

    PalindromeChecker checker;

    for (char ch : inputString) {
        checker.enqueueCharacter(ch);
        checker.pushCharacter(ch);
    }


    bool isPalindrome = true;
    while (!checker.charStack.empty()) {
        char queueChar = checker.dequeueCharacter();
        char stackChar = checker.popCharacter();
        if (queueChar != stackChar) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;

}

