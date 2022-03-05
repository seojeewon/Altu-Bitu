#include <bits/stdc++.h>

using namespace std;
vector<int> v, sorted;

void merge(int left, int mid, int right) {
    int p1 = left;
    int p2 = mid + 1;
    int idx = left;
    while (p1 <= mid && p2 <= right) {
        if (v[p1] < v[p2]) {
            sorted[idx++] = v[p1++];
        } else {
            sorted[idx++] = v[p2++];
        }
    }
    while (p1 <= mid) {
        sorted[idx++] = v[p1++];
    }
    while (p2 <= right) {
        sorted[idx++] = v[p2];
    }
    for (int i = left; i <= right; i++) {
        v[i] = sorted[i];
    }
}

void divide(int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    divide(left, mid);
    divide(mid + 1, right);
    merge(left, mid, right);
}

int main() {
    int n;
    cin >> n;

    v.assign(n, 0);
    sorted.assign(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    //merge sort
    divide(0, n - 1);
    for (int i = 0; i < n; i++)
        cout << sorted[i] << ' ';
    return 0;
}