#include<iostream>
#include<queue>
using namespace std;

void printq(queue<int> q) {
    while(!q.empty()) {
        cout << "\t" << q.front();
        q.pop();
    }
    cout << "\n";
}

int main() {
    queue<int> q;
    q.push(23);
    q.push(34);
    q.push(66);
    printq(q);
    cout << "Size is: " << q.size() << "\n";
    cout << "Front is: " << q.front() << "\n";
    cout << "Back is: " << q.back() << "\n";
    q.pop();
    printq(q);

    return 0;
}
