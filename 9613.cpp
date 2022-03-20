#include <iostream>
#include <vector>

using namespace std;
vector<pair<int,int>> make_pair(vector<int> &v){
    vector<pair<int,int>> v2;
    int len = v.size();
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            v2.push_back({v[i],v[j]});
        }
    }
    return v2;
}
int gcd_iter(int a, int b){
    if(b==0){
        return a;
    }
    return gcd_iter(b,a%b);
}
long long gcd_sum(vector<int> &v) {
    long long ans = 0;
    vector<pair<int,int>> v2=make_pair(v);
    int len = v2.size();
    for(int i=0;i<len;i++){
        ans+= gcd_iter(max(v2[i].first,v2[i].second), min(v2[i].first,v2[i].second));
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    vector<int> v;
    cin >> n;
    while (n--) {
        cin >> m;
        v.assign(m, 0);
        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }
        cout << gcd_sum(v) << '\n';
    }
    return 0;
}

