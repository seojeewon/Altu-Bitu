#include <iostream>
#include <vector>
using namespace std;

void solution(string name){
    int odd_cnt=0, len = name.length();
    string half_str, half_str_reverse, odd_ch;

    vector<int> v(26,0);
    for(int i=0;i<len;i++){
        int alpha = name[i]-'A';
        v[alpha]++;
    }
    for(int i=0;i<26;i++){
        if(v[i]==0) continue;
        if(v[i]%2){
            odd_ch=(char)(i+'A');
            odd_cnt++;
            continue;
        }
        half_str+=(char)(i+'A');
        half_str_reverse=(char)(i+'A')+half_str_reverse;
    }
    if(odd_cnt>1){
        cout<<"I'm Sorry Hansoo";
    } else{
        cout<<half_str+odd_ch+half_str_reverse;
    }
    return;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string name;
    cin >> name;
    solution(name);
    return 0;
}

