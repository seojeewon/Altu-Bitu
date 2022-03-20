#include <iostream>
#include <vector>

using namespace std;
const int SIZE = 5e6 + 1;

vector<int> makeChart() {
    vector<int> v(SIZE, 0);
    for (int i = 2; i * i < SIZE; i++) {
        if (v[i] != 0) continue;
        for (int j = i * i; j < SIZE; j += i) {
            if (v[j] == 0) v[j] = i;
        }
    }
    return v;
}

void solution(int n, vector<int> &st) {
    while (st[n]) {
        cout << st[n] << ' ';
        n /= st[n];
    }
    cout << n << '\n';
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> st = makeChart();
    for (int i = 0; i < n; i++) {
        solution(v[i], st);
    }

}

