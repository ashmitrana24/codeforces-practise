#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n;cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vi b(n,0);
    for(int i=0;i<n;i++){
        b[i]=n+1-a[i];
    }
    for(auto c:b) cout<<c<<" ";
    cout<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}