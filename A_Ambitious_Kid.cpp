#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n; cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) cin >>a[i];
    int mn=INT_MAX;
    for(int i = 0; i < n; i++) {
        mn = min(mn, abs(a[i]));
    }
    cout <<mn<< endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}