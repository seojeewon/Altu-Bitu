#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main() {
    int N, tmp;
    vector<int> v;
    set<int> s;
    cin >> N;
    v.assign(N, 0);
    while (N--) {
        cin >> tmp;
        s.insert(tmp);
    }
    //set<int>::iterator iter
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        cout << *iter << ' ';
    }

}


