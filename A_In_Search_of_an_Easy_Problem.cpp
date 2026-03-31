#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n;cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    for(auto it:a){
        if(it==1){
            cout<<"HARD";
            return;
        }
    }
    cout<<"EASY";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}