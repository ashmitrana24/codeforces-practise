#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n; cin>>n;
    vi a(n-1);
    for(int i=0;i<n-1;i++) cin>>a[i];
    ll s=accumulate(begin(a),end(a),0);
    cout<<-s<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}