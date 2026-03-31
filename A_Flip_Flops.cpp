#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    ll n,c,k;
    cin >> n >> c >> k;
    vll a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int idx=-1;

    for(int i=0;i<n;i++){

        if(c>=a[i]){
            c+=a[i];
            idx=i;
        }
        else break;
    }

    if(idx!= -1) c+=k;

    cout<<c<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}