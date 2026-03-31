#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n;
    cin >> n;
    string s;
    cin>>s;

    int cnt=0;
    if(s.find("...") != string::npos) cout<<2<<endl;

    else{
        for(int i=0;i<s.size();i++){
            
            if(s[i]=='.') cnt++;

        }
        cout<<cnt<<endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}