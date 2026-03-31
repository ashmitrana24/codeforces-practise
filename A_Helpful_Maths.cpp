#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    string s;cin>>s;
    if(s.size()==1){
        cout<<s;
        return;
    }
    vi a;
    for(int i=0;i<s.size();i++){
        if(s[i] != '+') a.push_back((s[i]-'0'));
    }
    sort(begin(a),end(a));

    for(int i=0;i<a.size();i++){
        cout<<a[i];
        if(i!=a.size()-1) cout<<"+";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}