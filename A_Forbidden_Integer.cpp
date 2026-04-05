#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    int n,k,x;
    cin>>n>>k>>x;

    //case 1: if x is not 1, we can use 1 to fill the array and it will be valid
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=1;i<=n;i++) cout<<1<<" ";
        cout<<endl;
        return;
    }
    //case 2: x is 1
    if(k==1){
        cout<<"NO"<<endl;
        return;
    }
    if(k==2){
        if(n%2!=0){
            cout<<"NO"<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0;i<(n/2);i++) cout<<2<<" ";
            cout<<endl;
            return;
        }
    }
    if(k>=3){
        if(n%2==0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0;i<(n/2);i++) cout<<2<<" ";
            cout<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            cout<<((n-3)/2)+1<<endl;
            cout<<3<<" ";
            for(int i=0;i<(n-3)/2;i++) cout<<2<<" ";
            cout<<endl;
            return;
        }
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