#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n; cin>>n;
    vi a(n);
    a[0]=1;
    int j=1;
    for(int i=3;i<=1e4 && j<n;i*=2){
        a[j]=i;
        j++;
    }
    for(auto c:a) cout<<c<<" ";
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}