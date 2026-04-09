#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n;cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int po=0,ne=0,op=0;
    for(auto x:a){
        if(x>0) po++;
        else ne++;
    }
    while(po<ne || ne%2==1){
        po++;
        ne--;
        op++;
    }
    cout<<op<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}