#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            cout<<0<<endl;
            return;
        }
    }
    int ans=INT_MAX;
    for(int i=0;i<n-1;i++){
        int ops=(a[i+1]-a[i])/2+1;
        ans=min(ans,ops);
    }
    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}