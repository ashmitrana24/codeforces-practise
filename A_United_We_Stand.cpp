#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n;cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vi b,c;
    int mn=*min_element(begin(a),end(a));
    for(int i=0;i<n;i++){
        if(a[i]==mn) b.push_back(a[i]);
        else c.push_back(a[i]);
    }
    if(c.size()==0){
        cout<<-1<<endl;
        return;
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(auto x:b) cout<<x<<" ";
    cout<<endl;
    for(auto x:c) cout<<x<<" ";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}