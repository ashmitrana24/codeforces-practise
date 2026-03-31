#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    string s;cin>>s;
    set<char>st;
    for(int i=0;i<s.size();i++) st.insert(s[i]);
    if(st.size()%2!=0) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}