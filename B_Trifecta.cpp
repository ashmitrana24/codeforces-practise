#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int,int>> horses;
    for(int i = 0; i < N; i++) {
        int t;
        cin >> t;
        horses.push_back({t, i + 1});
    }

    sort(horses.begin(), horses.end());

    cout << horses[0].second << " "
         << horses[1].second << " "
         << horses[2].second << "\n";

    return 0;
}
