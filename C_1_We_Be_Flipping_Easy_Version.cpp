/*
Submitted by: Ashmit Rana
*/

#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long
#define vll vector<long long>

/* MACROS */
#define f(i,s,e) for(long long i=s;i<e;i++)
#define pb push_back

/* clang-format on */

void solve(){
    ll n;
    cin >> n;

    vll a(n);

    f(i,0,n) cin >> a[i];

    vll idx;

    ll flip = 0;

    for(int i=n-1;i>=0;i--){

        ll cur = a[i];

        if(flip) cur = -cur;

        if(cur > 0){
            idx.pb(i+1);
            flip ^= 1;
        }
    }

    cout << idx.size() << endl;

    for(auto &x : idx) cout << x << " ";

    cout << endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}