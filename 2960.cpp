#include <iostream>
#include <vector>

using namespace std;

int solution(int n, int k) {
    vector<bool> v(n + 1, true);
    int index = 0;
    v[0] = false;
    v[1] = false;
    for (int i = 2; i <= n; i++) {
        if (!v[i]) continue;

        for (int j = i; j <= n; j += i) {
            if (!v[j]) continue;
            v[j] = false;
            if (++index == k) {
                return j;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    cout << solution(n, k);
    return 0;
}

