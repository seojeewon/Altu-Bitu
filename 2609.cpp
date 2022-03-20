#include <iostream>

using namespace std;

int gcdIter(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcdIter(b, a % b);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    int gcd, lcm;
    cin >> a >> b;

    gcd = gcdIter(max(a, b), min(a, b));
    lcm = a * b / gcd;
    cout << gcd << '\n' << lcm;
    return 0;
}

