#include <iostream>
#include <queue>

using namespace std;

int findSafePosition(int n, int m) {
    queue<int> q;

    for (int i = 0; i < n; ++i) {
        q.push(i);
    }

    while (q.size() > 1) {
        // elimination to m-1 pos as started from 0
        for (int i = 0; i < m - 1; ++i) {
            int front = q.front();
            cout<<"front"
            q.pop();
            q.push(front);//pushes in end now
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

