#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int l = 1, r = 3 * n;
    vector<int>ans;
    while (l < r) {
        int median = r - 1;   
        ans.push_back(l);     
        ans.push_back(median);
        ans.push_back(r);
        l++;
        r -= 2;
    }

    for (int x : ans) cout << x << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}