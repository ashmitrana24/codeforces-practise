#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// Function to compute gcd of two numbers
ll gcdll(ll a, ll b) {
    while (b) {
        ll t = b;
        b = a % b;
        a = t;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    ll g = a[0];
    for (int i = 1; i < n; i++) g = gcdll(g, a[i]);

    if (g == 1) {
        cout << 2 << "\n"; // any x works, smallest is 2
        return;
    }

    // Try small x values until gcd(g, x) == 1
    for (ll x = 2; x <= 1e6; x++) {
        if (gcdll(g, x) == 1) {
            cout << x << "\n";
            return;
        }
    }

    // If not found (shouldn't happen in practice)
    cout << -1 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
