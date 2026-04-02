#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vc = vector<char>;
using vll = vector<long long>;
using vvc=vector<vector<char>>;

void solve() {
   vvc a(10,vc(10));
   for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin>>a[i][j];
        }
    }
    int s=0,n=10;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='X'){
                if((i>=4 && i<=n-5) && (j>=4 && j<=n-5)) s+=5;
                else if((i>=3 && i<=n-4) && (j>=3 && j<=n-4)) s+=4;
                else if((i>=2 && i<=n-3) && (j>=2 && j<=n-3)) s+=3;
                else if((i>=1 && i<=n-2) && (j>=1 && j<=n-2)) s+=2;
                else s+=1;
            }
        }
    }
    cout<<s<<endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}