#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;cin>>n>>t;
    string s;cin>>s;
    int ti=0;
    while(ti<t){
        int i=0;
        while(i<n-1){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
            i++;
        }
        ti++;
    }
    cout<<s<<endl;
    return 0;
}