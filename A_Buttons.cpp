#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int a,b,c; cin>>a>>b>>c;
    int k=c/2;
    int an=c-k;
    k+=b;an+=a;
    if(k>=an) cout<<"Second"<<endl;
    else cout<<"First"<<endl;
}  

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}