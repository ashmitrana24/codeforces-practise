#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<long long> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        string dgdCode;
        cin >> dgdCode;

        vector<long long> D(k + 1, 0);
        for (int i = 1; i <= k; i++) {
            D[i] = D[i - 1] + (dgdCode[i - 1] == 'R' ? 1 : -1);
        }

        unordered_map<long long, int> firstPos;
        for (int i = 1; i <= k; i++) {
            if (!firstPos.count(D[i])) {
                firstPos[D[i]] = i;
            }
        }

        vector<int> dead_at(k + 2, 0);

        for (int i = 0; i < n; i++) {
            int die_time = INT_MAX;
            for (int j = 0; j < m; j++) {
                long long need = b[j] - a[i];
                if (firstPos.count(need)) {
                    die_time = min(die_time, firstPos[need]);
                }
            }
            if (die_time <= k) {
                dead_at[die_time]++;
            }
        }

        int alive = n;
        for (int i = 1; i <= k; i++) {
            alive -= dead_at[i];
            cout << alive << " ";
        }
        cout << "\n";
    }
    return 0;
}
