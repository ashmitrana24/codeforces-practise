#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n,m;
    cin>>n>>m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    if(s==x){
        cout<<0<<endl;
        return;
    }
    int op=0;
    while(n<=100){
        if(x.find(s) != string::npos){
            cout<<op<<endl;
            return;
        }
        x+=x;
        n*=2;
        op++;
    }
    cout<<-1<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}