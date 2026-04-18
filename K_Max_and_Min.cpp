#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A,B,C;cin>>A>>B>>C;
    cout<<min({A,B,C})<<" "<<max({A,B,C});
    return 0;
}