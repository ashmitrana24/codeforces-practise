#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;cin>>n;
    vector<ll>a(n+1),pos(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pos[a[i]]=i;
    }
    int m;cin>>m;
    vector<ll>b(m);
    ll v=0,p=0;
    for(int i=0;i<m;i++){
        ll x;
        cin>>x;
        v+=pos[x];
        p+=(n-pos[x]+1);
    }
    cout<<v<<" "<<p;
    return 0;
}