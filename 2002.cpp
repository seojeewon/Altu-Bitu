#include <iostream>
#include <map>
#include <vector>

using namespace std;

//추월한 차가 몇 개인지 구하는 함수
int jumpCar(int n, vector<string> &v, map<string, int> &car) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { //나보다 늦게 들어온 차가 늦게 들어온 차였다면
            if (car[v[i]] > car[v[j]]) {
                ans++;
                break;
            }
        }
    }
    return ans;
}

int main() {
    map<string, int> car;
    int n, pass;
    string input;

    cin >> n;
    vector<string> v(n, "");
    for (int i = 1; i <= n; i++) {
        cin >> input;
        car[input] = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << jumpCar(n, v, car);
}

