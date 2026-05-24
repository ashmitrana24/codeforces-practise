/*
Submitted by: Ashmit Rana
Timestamp: 2026-05-24 21:14:34 IST
*/

#include <bits/stdc++.h>
using namespace std;

/* clang-format off */

/* TYPES  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define vpii vector<pii>
#define vpll vector<pll>
#define umii unordered_map<int, int>
#define usi unordered_set<int>
#define ff first
#define ss second

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define trav(x,a) for (auto &x : a)
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define INF 1e9
#define LINF 1e18
#define setbit(x) __builtin_popcountll(x)
#define lsb(x) ((x) & (-x))
#define PI 3.1415926535897932384626433832795
#define endl '\n'
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }

/*  All Required define Pre-Processors and typedef Constants */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;

/* clang-format on */

void solve(){
    ll n;cin>>n;
    vll a(n);
    f(i,0,n) cin>>a[i];
    sort(all(a));
    for(int i=0;i<n-1;i++){
        if(i%2==1){
            swap(a[i],a[i+1]);
        }
    }
    bool ok=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            ok=false;
            break;
        }
    }
    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

/* Main()  function */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while(tc--){
        solve();
    }
    return 0;
}
/* Main() Ends Here */