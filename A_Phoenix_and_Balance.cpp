/*
Submitted by: Ashmit Rana
Timestamp: 2026-08-22 09:06:42 IST
*/
#include <bits/stdc++.h>
using namespace std;
/* clang-format off */
/* TYPES */
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int,int>
#define si set<int>
#define sc set<char>
#define vpii vector<pii>
#define vpll vector<pll>
#define umii unordered_map<int,int>
#define usi unordered_set<int>
#define v vector
#define ff first
#define ss second
/* FUNCTIONS */
#define f(i,s,e) for(ll i=s;i<e;i++)
#define cf(i,s,e) for(ll i=s;i<=e;i++)
#define rf(i,e,s) for(ll i=e-1;i>=s;i--)
#define trav(x,a) for(auto &x:a)
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define fraction(a) cout.unsetf(ios::floatfield);cout.precision(a);cout.setf(ios::fixed,ios::floatfield);
/* PRINTS */
template<class T>
void print_v(vector<T>&v){cout<<"{";for(auto x:v)cout<<x<<",";cout<<"\b}";}
/* UTILS */
#define MOD 1000000007
#define INF 1e9
#define LINF 1e18
#define setbit(x) __builtin_popcountll(x)
#define lsb(x) ((x)&(-x))
#define PI 3.1415926535897932384626433832795
#define endl '\n'
ll min(ll a,int b){return a<b?a:b;}
ll min(int a,ll b){return a<b?a:b;}
ll max(ll a,int b){return a>b?a:b;}
ll max(int a,ll b){return a>b?a:b;}
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
ll power(ll a,ll b,ll mod=MOD){ll res=1;a%=mod;while(b>0){if(b&1)res=res*a%mod;a=a*a%mod;b>>=1;}return res;}
ll modinv(ll a,ll mod=MOD){return power(a,mod-2,mod);}
string to_upper(string a){for(int i=0;i<(int)a.size();++i)if(a[i]>='a'&&a[i]<='z')a[i]-='a'-'A';return a;}
string to_lower(string a){for(int i=0;i<(int)a.size();++i)if(a[i]>='A'&&a[i]<='Z')a[i]+='a'-'A';return a;}
bool prime(ll a){if(a<=1)return 0;for(ll i=2;i*i<=a;++i)if(a%i==0)return 0;return 1;}
void yes(){cout<<"YES\n";}
void no(){cout<<"NO\n";}
/* SIEVE — sieve[i]=1 prime, 0 not prime */
vector<ll> sieve(ll n){vector<ll>s(n+1,1);s[0]=s[1]=0;for(ll i=2;i*i<=n;i++)if(s[i])for(ll j=i*i;j<=n;j+=i)s[j]=0;return s;}
/* DSU */
struct DSU{
    vector<int>p,rank_;
    DSU(int n):p(n),rank_(n,0){iota(p.begin(),p.end(),0);}
    int find(int x){return p[x]==x?x:p[x]=find(p[x]);}
    bool unite(int a,int b){a=find(a);b=find(b);if(a==b)return 0;if(rank_[a]<rank_[b])swap(a,b);p[b]=a;if(rank_[a]==rank_[b])rank_[a]++;return 1;}
    bool same(int a,int b){return find(a)==find(b);}
};
/* GRAPH */
vector<vector<int>>adj;
void addEdge(int u,int v){adj[u].pb(v);adj[v].pb(u);}
vi bfs(int src,int n){vi dist(n,-1);queue<int>q;dist[src]=0;q.push(src);while(!q.empty()){int u=q.front();q.pop();trav(v,adj[u])if(dist[v]==-1){dist[v]=dist[u]+1;q.push(v);}}return dist;}
/* COMBINATORICS */
const int MAXN=2e6+5;
ll fact[MAXN],inv_fact[MAXN];
void precompute(){fact[0]=1;cf(i,1,MAXN-1)fact[i]=fact[i-1]*i%MOD;inv_fact[MAXN-1]=modinv(fact[MAXN-1]);rf(i,MAXN-1,0)inv_fact[i]=inv_fact[i+1]*(i+1)%MOD;}
ll C(ll n,ll r){if(r<0||r>n)return 0;return fact[n]%MOD*inv_fact[r]%MOD*inv_fact[n-r]%MOD;}
/* TYPEDEFS */
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
/* clang-format on */
/*
 * OBS:
 * 
 * APR:
 * 
 */
void solve(){
    int n;
    cin>>n;
    vi a;
    for(int i=0;i<n;i++){
        a.pb(pow(2,i+1));
    }
    int s1=a[n-1],s2=0;
    for(int i=0;i<n/2-1;i++){
        s1 += a[i];
    }
    for(int i=n/2-1;i<n-1;i++){
        s2 += a[i];
    }
    cout<<abs(s1-s2)<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin>>tc;
    while(tc--)solve();
    return 0;
}