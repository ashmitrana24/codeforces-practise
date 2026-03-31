#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        long long h;
        cin >> n >> m >> h;

        vector<long long> base(n);
        for (int i = 0; i < n; i++) {
            cin >> base[i];
        }

        vector<long long> add(n, 0);
        vector<int> last_reset(n, -1);

        int reset_version = 0;

        while (m--) {
            int b;
            long long c;
            cin >> b >> c;
            b--; // 0-indexed

            if (last_reset[b] != reset_version) {
                add[b] = 0;
                last_reset[b] = reset_version;
            }

            add[b] += c;

            if (base[b] + add[b] > h) {
                // crash
                reset_version++;
            }
        }

        // output final array
        for (int i = 0; i < n; i++) {
            if (last_reset[i] == reset_version) {
                cout << base[i] + add[i] << " ";
            } else {
                cout << base[i] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
