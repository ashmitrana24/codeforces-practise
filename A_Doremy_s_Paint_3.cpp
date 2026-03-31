#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n; cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++) mp[a[i]]++;
    if(mp.size()>2){
        cout<<"No"<<endl;
        return;
    }
    if(mp.size()==1){
        cout<<"Yes"<<endl;
        return;
    }
    vi b(2);
    int i=0;
    for(auto it:mp){
        b[i]=it.second;
        i++;
    }
    if(abs(b[0]-b[1])>1) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}