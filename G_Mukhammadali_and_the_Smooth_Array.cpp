#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n), c(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> c[i];

        // Coordinate compression
        vector<ll> vals = a;
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());
        int m = vals.size();

        // dp[i][j] = min cost up to i, if a[i] -> vals[j]
        const ll INF = 1e18;
        vector<ll> dp(m, INF), newdp(m);

        // Initialize for first element
        for (int j = 0; j < m; ++j) {
            ll cost = (a[0] == vals[j]) ? 0 : c[0];
            dp[j] = cost;
        }

        // Process rest
        for (int i = 1; i < n; ++i) {
            // prefix min of dp
            vector<ll> pref(m);
            pref[0] = dp[0];
            for (int j = 1; j < m; ++j)
                pref[j] = min(pref[j-1], dp[j]);

            for (int j = 0; j < m; ++j) {
                ll cost = (a[i] == vals[j]) ? 0 : c[i];
                newdp[j] = pref[j] + cost;
            }
            dp = newdp;
        }

        cout << *min_element(dp.begin(), dp.end()) << "\n";
    }
    return 0;
}
