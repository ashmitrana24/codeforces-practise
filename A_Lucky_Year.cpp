#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin>>n;
    string yr=to_string(n);
    int x=yr.size();
    if(x==1){
        cout<<1<<endl;
        return 0;
    }
    if(x>1){
        ll nxt=yr[0]-'0'+1;
        ll f=x-1;
        for(int i=0;i<f;i++)nxt*=10;
        cout<<nxt-n<<endl;
    }
    return 0;
}