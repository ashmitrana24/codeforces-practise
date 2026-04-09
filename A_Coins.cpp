#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;
void solve() {
    ll n,k;cin>>n>>k;
    if(n%2==0||n%k==0) cout<<"YES"<<endl;
    else{
        if(k%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}