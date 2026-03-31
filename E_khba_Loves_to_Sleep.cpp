#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    long long x;
    cin >> n >> k >> x;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    vector<long long> teleports;

    // If we have more teleports than range, just fill all
    if (k >= x + 1) {
        for (long long i = 0; i <= x; i++) teleports.push_back(i);
    } 
    else {
        // Compute all possible positions that are NOT friends
        set<long long> free_positions;
        for (long long i = 0; i <= x; i++) free_positions.insert(i);
        for (auto f : a) free_positions.erase(f);

        // Choose teleports from the farthest side
        vector<long long> frees(free_positions.begin(), free_positions.end());

        // Strategy: if friends are near 0, choose from end; if near x, choose from start
        long long left_gap = a[0] - 0;
        long long right_gap = x - a.back();

        if (right_gap >= left_gap) {
            // choose from rightmost side
            for (int i = (int)frees.size() - k; i < (int)frees.size(); i++)
                teleports.push_back(frees[i]);
        } else {
            // choose from leftmost side
            for (int i = 0; i < k; i++)
                teleports.push_back(frees[i]);
        }
    }

    for (auto t : teleports)
        cout << t << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
