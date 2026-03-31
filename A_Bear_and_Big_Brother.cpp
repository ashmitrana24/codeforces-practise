#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int a,b; cin>>a>>b;
    int yr=0;
    while(a<=b){
        a*=3;
        b*=2;
        yr++;
    }
    cout << yr << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}