#include <iostream>
#include <queue>

using namespace std;

int findSafePosition(int n, int m) {
    queue<int> q;

    for (int i = 0; i < n; ++i) {
        q.push(i);
    }

    while (q.size() > 1) {
        for (int i = 0; i < m - 1; ++i) {
            int front = q.front();
            q.pop();
            q.push(front);
        }
        q.pop();
    }

    return q.front();
}

int main() {
    int n, m;
    cout << "Enter the number of people (n): ";
    cin >> n;
    cout << "Enter the elimination count (m): ";
    cin >> m;

    int safePosition = findSafePosition(n, m);
    cout << "The safe position is: " << safePosition << endl;

    return 0;
}

