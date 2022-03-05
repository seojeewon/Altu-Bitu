#include <iostream>
#include <vector>

using namespace std;
vector<int> v;

void bubble(int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] < v[j + 1]) continue;
            swap(v[j], v[j + 1]);
        }
    }

}

void bubble_adv(int n) {
    bool isAlign = true;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] < v[j + 1]) continue;
            isAlign = false;
            swap(v[j], v[j + 1]);
        }
        if(isAlign) return;
    }
}

int main() {
    int n;
    cin >> n;
    v.assign(n, 0);
    //정렬 전 숫자 받기
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    //버블 정렬
    //bubble(n);
    bubble_adv(n);
    for (int i = 0; i < n; i++)
        cout << v[i];
    return 0;
}

