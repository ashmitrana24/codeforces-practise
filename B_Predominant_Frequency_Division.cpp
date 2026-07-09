#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    vector<int> pref1(n), pref2(n);

    for (int i = 0; i < n; i++) {
        int v1 = (a[i] == 1 ? 1 : -1);
        int v2 = (a[i] == 3 ? -1 : 1);

        pref1[i] = v1 + (i ? pref1[i - 1] : 0);
        pref2[i] = v2 + (i ? pref2[i - 1] : 0);
    }

    vector<int> sufMax(n, INT_MIN);

    sufMax[n - 2] = pref2[n - 2];
    for (int i = n - 3; i >= 0; i--)
        sufMax[i] = max(sufMax[i + 1], pref2[i]);

    for (int i = 0; i <= n - 3; i++) {
        if (pref1[i] >= 0 && sufMax[i + 1] >= pref2[i]) {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();
}