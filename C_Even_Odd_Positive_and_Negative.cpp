#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int e=0,o=0,p=0,ne=0;
    for(auto x:a){
        if(x%2==0) e++;
        else o++;
        if(x>0) p++;
        if(x<0) ne++;
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<ne<<endl;
    return 0;
}