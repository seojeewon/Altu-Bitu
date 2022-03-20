#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

bool cmp(const string &a, const string &b) {
    int a_len = a.length();
    int b_len = b.length();
    if (a_len != b_len) {
        return a_len < b_len;
    }
    return a < b;
}

int main() {
    int n;
    string s;
    set<string> word;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s;
        if (word.count(s)) continue;
        word.insert(s);
    }
    vector<string> v(word.begin(), word.end());
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {    //i<n했다가 runtime error나옴
        cout << v[i] << '\n';
    }
}