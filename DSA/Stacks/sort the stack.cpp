#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of the stack
void insertatpos(stack<int> &s, int target) {
    if (s.empty() || s.top()<=target) {
        s.push(target);
        return;
    }
    int temp = s.top();
    s.pop();
    insertatpos(s, target);
    s.push(temp);
}

// Function to reverse the stack
void sortthestack(stack<int> &s) {
    if(s.empty()) {
        return;
    }
    int target = s.top();
    s.pop();
    sortthestack(s);
    insertatpos(s, target);
}

int main() {
    stack<int> s;
    s.push(100);
    s.push(20);
    s.push(30);

    sortthestack(s);

    cout << "Printing reversed stack elements from top to bottom:" << endl;
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}
