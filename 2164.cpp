#include <iostream>
#include <queue>

using namespace std;

int solution(int n) {
    int ans = 0;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    while (q.size() != 1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    ans = q.front();
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout << solution(n);
    return 0;
}

