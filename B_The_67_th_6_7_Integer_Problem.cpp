#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    vi a(7);
    for(int i=0;i<7;i++) cin>>a[i];
    sort(begin(a),end(a));
    int s=0;
    for(int i=0;i<6;i++){
        s+=a[i];
    }
    int rem=(-s+a[6]);
    cout<<rem<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}