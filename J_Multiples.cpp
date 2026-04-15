#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B;cin>>A>>B;
    if(A%B==0 || B%A==0){
        cout<<"Multiples"<<endl;
    }
    else cout<<"No Multiples"<<endl;

    return 0;
}