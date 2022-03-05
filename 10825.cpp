#include <bits/stdc++.h>

using namespace std;
struct student {
    string name;
    int kor, eng, math;
};
vector<student> stu;

bool cmp(const student &a, const student &b) {
    if (a.kor != b.kor)
        return a.kor > b.kor;
    if (a.eng != b.eng)
        return a.eng < b.eng;
    if (a.math != b.math)
        return a.math > b.math;
    return a.name < b.name;
}

int main() {
    int n;
    cin >> n;
    stu.assign(n, {});
    for (int i = 0; i < n; i++) {
        cin >> stu[i].name >> stu[i].kor >> stu[i].eng >> stu[i].math;
    }
    sort(stu.begin(), stu.end(), cmp);
    for (int i = 0; i < n; i++)
        cout << stu[i].name << '\n';
}

/**
 * sort함수
 * Sorts the elements in the range [first,last) into ascending order.
 * 세 번째 인자에 비교함수(cmp)를 넣어서 원하는 조건대로 정렬할 수 있음
 * 비교함수가 false를 리턴하는 경우 swap한다.
 *
 * compare 함수에서 const(상수)를 사용하는 이유는 compare 함수를 이용하면서
 * 값을 바꾸지 않고 값을 참조만 하겠다는 것을 명시적으로 나타내기 위함이다.
**/