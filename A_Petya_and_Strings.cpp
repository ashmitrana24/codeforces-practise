#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

void solve() {
    string s1,s2;
    cin>>s1>>s2;
    string s1_="",s2_="";
    for(int i=0;i<s1.size();i++){
        s1_.push_back(tolower(s1[i]));
    }
    for(int i=0;i<s2.size();i++){
        s2_.push_back(tolower(s2[i]));
    }

    if(s1_==s2_) cout<<0;
    if(s1_<s2_) cout<<-1;
    if(s1_>s2_) cout<<1;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}