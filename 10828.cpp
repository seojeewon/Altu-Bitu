#include <iostream>
#include <vector>

using namespace std;
//push:삽입
//pop
//size
const int SIZE = 1e4;
int top_pointer = -1;
vector<int> stack_vec(SIZE);

void push(int x) {
    stack_vec[++top_pointer] = x;
    return;
}

int pop() {
    return stack_vec[top_pointer--];
}

int size() {
    return top_pointer + 1;
}

bool empty() {
    return top_pointer == -1;
}

int top() {
    return stack_vec[top_pointer];
}

int main() {
    int n, x;
    string cmd;
    cin >> n;
    while (n--) {
        cin >> cmd;
        if (cmd == "push") {
            if (top_pointer == SIZE - 1) continue;
            cin >> x;
            push(x);
            continue;
        }
        if (cmd == "pop") {
            if (empty()) {
                cout << -1 << '\n';
            } else {
                cout << pop() << '\n';
            }
            continue;
        }
        if (cmd == "size") {
            cout << size() << '\n';
            continue;
        }
        if (cmd == "empty") {
            cout << empty() << '\n';
            continue;
        }
        if (cmd == "top") {
            if (empty()) {
                cout << "-1\n";
            } else {
                cout << top() << '\n';
            }
            continue;
        }
    }
    return 0;
}
