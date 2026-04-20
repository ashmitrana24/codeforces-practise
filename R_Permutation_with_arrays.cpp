#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int>b(n);
    for(int i=0;i<n;i++) cin>>b[i];
    sort(begin(a),end(a));
    sort(begin(b),end(b));
    if(a==b) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}