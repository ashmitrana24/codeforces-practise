#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> steps(n);
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            steps[i] = 100 / a;
        }
        sort(steps.begin(), steps.end());
        int reach = 0;
        bool ok = true;
        for(int d : steps){
            if(d > reach + 1){
                ok = false;
                break;
            }
            reach += 100;
        }
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}