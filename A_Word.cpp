#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;cin>>s;
    int l=0,u=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])) u++;
        else l++;
    }
    if(l>=u){
        for(auto c:s){
            cout<<(char)tolower(c);
        }
    }
    else{
        for(auto c:s){
            cout<<(char)toupper(c);
        }
    }
    return 0;
}