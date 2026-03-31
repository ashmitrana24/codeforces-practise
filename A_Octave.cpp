#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int x, y;
    cin >> x >> y;
    int result = x * (1 << y);  
    cout << result << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();   
    return 0;
}
