#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    string s; cin>>s;
    int n=s.size();
    if(n%2!=0){
      cout<<"NO"<<endl;
      return;  
    } 
    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'||s[i]=='C') c1++;
        else c2++;
    }
    if(c1==c2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}