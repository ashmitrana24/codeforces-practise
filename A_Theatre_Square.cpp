#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    ll n , m , a;
    cin>>n>>m>>a;

    ll ans = (n + a - 1) / a * (m + a - 1) / a;
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}