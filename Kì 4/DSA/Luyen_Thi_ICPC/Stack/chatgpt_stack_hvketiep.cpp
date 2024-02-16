#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

void nextPermutation(stack<int> &s) {
    int n = s.size();
    if (n < 2) return;
    
    int x = s.top();
    s.pop();
    int y = s.top();
    s.pop();
    
    if (y < x) {
        s.push(x);
        nextPermutation(s);
        return;
    }
    
    stack<int> t;
    t.push(x);
    while (!s.empty() && s.top() > y) {
        t.push(s.top());
        s.pop();
    }
    t.push(y);
    while (!s.empty()) {
        t.push(s.top());
        s.pop();
    }
    
    while (!t.empty()) {
        s.push(t.top());
        t.pop();
    }
}

int main() {
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(2);

    cout << "Original stack: ";
    stack<int> tmp = s;
    while (!tmp.empty()) {
        cout << tmp.top() << " ";
        tmp.pop();
    }
    cout << endl;

    nextPermutation(s);

    cout << "Next permutation: ";
    tmp = s;
    while (!tmp.empty()) {
        cout << tmp.top() << " ";
        tmp.pop();
    }
    cout << endl;

    return 0;
}
