#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool checkBalance(const string& str) {
    stack<char> s;

    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty()) {
                return false;
            }

            char top = s.top();
            s.pop();

            if ((c == ')' && top != '(') ||
                (c == ']' && top != '[') ||
                (c == '}' && top != '{')) {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    string input;
    cout << "Enter a string of parentheses, square brackets, and curly braces: ";
    getline(cin, input);

    bool balanced = checkBalance(input);
    if (balanced) {
        cout << "The parentheses, square brackets, and curly braces are properly balanced." << endl;
    } else {
        cout << "The parentheses, square brackets, and curly braces are not properly balanced." << endl;
    }

    return 0;
}

