#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<b){
        cout<<-1<<endl;
        return;
    }
    if(a==c&&b==d) {
        cout<<0<<endl;
        return;
    }
    ll dy=d-b;
    a+=dy;
    if(c>a){
        cout<<-1<<endl;
    }
    else{
        ll dx=a-c;
        cout<<dy+dx<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}