#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
using vs = vector<string>;

void solve() {
    vs a(3);
    string s;
    for (int i=0;i<3;i++) cin>>a[i];
    for(auto c:a){
        string x=c;
        s+=x[0];
    }
    cout<<s<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}