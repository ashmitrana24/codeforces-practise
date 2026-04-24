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

/* FUNCTIONS */
#define f(i,s,e) for(long long int i=s;i<e;i++)
#define cf(i,s,e) for(long long int i=s;i<=e;i++)
#define rf(i,e,s) for(long long int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
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

bool checker(string x,ll hb,ll hs,ll hc,ll pb, ll ps, ll pc, ll r,ll b_r){
    ll b=0,s=0,c=0;
    for(auto a:x){
        if(a=='B') b++;
        else if(a=='S') s++;
        else c++;
    }
    b=b_r*b,s=b_r*s,c=b_r*c;
 
    ll extra_b=max(0,b-hb);
    ll extra_s=max(0,s-hs);
    ll extra_c=max(0,c-hc);
    
    ll c_b=0,c_s=0,c_c=0;
    if(extra_b>0){
        c_b=pb*extra_b;
    }
    if(extra_s>0){
        c_s=ps*extra_s;
    }
    if(extra_c>0){
        c_c=pc*extra_c;
    }
    return c_b+c_s+c_c<=r;
}

void solve(){
    string x;cin>>x;
    ll b,s,c;cin>>b>>s>>c;
    ll pb,ps,pc;cin>>pb>>ps>>pc;
    ll r;cin>>r;

    ll lo=0,hi=1e13,ans=lo;
    while(lo<=hi){
        ll mid=lo+(hi-lo)/2;
        if(checker(x,b,s,c,pb,ps,pc,r,mid)){
            ans=mid;
            lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans;
}

/* Main()  function */
int main()
{
    solve();
    
    return 0;
}
/* Main() Ends Here */