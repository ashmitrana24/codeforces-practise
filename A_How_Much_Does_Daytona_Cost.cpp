#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n,k;
    cin >>n>>k;
    vi a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    unordered_set<int>st(begin(a),end(a));
    if(st.find(k) != st.end()){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}