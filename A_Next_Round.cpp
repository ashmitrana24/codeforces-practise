#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n,k; cin>>n>>k;
    int cnt=0;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<a.size();i++){
        if(a[i]>=a[k-1] && a[i] > 0) cnt++;
    }
    cout<<cnt;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}