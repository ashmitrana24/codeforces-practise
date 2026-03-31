#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    string s;cin>>s;
    int cnt=1,l=0;
    for(int r=1;r<s.size();r++){
        if(s[l]==s[r]){
            cnt++;
            if(cnt>=7){
                cout<<"YES";
                return;
            }
        }
        else{
            cnt=1;
            l=r;
        }
    }
    cout<<"NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}