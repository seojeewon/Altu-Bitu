#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    map<int, string> pocket_int;
    map<string, int> pocket_str;
    int N, M;
    string str;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        cin >> str;
        pocket_int[i] = str;
        pocket_str[str] = i;
    }
    while (M--) {
        //입력이 문자와 숫자가 섞여 있으면 문자열로 받는다
        cin >> str;
        //isdigit은 숫자인지 문자인지 확인
        if (isdigit(str[0])) {
            int num = stoi(str);
            cout << pocket_int[num]<<'\n';  //ctrl+alt+n
        } else {
            cout << pocket_str[str]<<'\n';
        }
    }
}

