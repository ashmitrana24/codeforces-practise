/**
 *  Author  : Ashmit
 *  Problem : Codeforces
 */
#include <bits/stdc++.h>
using namespace std;
// ---------- Types ----------
using ll = long long;
using ull = unsigned long long;
using i128 = __int128_t;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vb = vector<bool>;
using vs = vector<string>;
// ---------- Macros ----------
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define each(x, v) for (auto &x : v)
// ---------- Constants ----------
constexpr int MOD = 1'000'000'007;
constexpr int MOD2 = 998'244'353;
constexpr ll INF = 4e18;
constexpr int INFI = 2e9;
constexpr ld EPS = 1e-9;
const ld PI = acosl(-1.0L);
// 4-direction and 8-direction moves
constexpr int dx4[] = {0, 1, 0, -1};
constexpr int dy4[] = {1, 0, -1, 0};
constexpr int dx8[] = {0, 1, 1, 1, 0, -1, -1, -1};
constexpr int dy8[] = {1, 1, 0, -1, -1, -1, 0, 1};
// ---------- Utilities ----------
template <class T> bool chmin(T &a, const T &b) { return b < a ? a = b, true : false; }
template <class T> bool chmax(T &a, const T &b) { return a < b ? a = b, true : false; }
// Fast RNG (hack-resistant seed)
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll rnd(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }
// Modular arithmetic
ll power(ll b, ll e, ll m = MOD) {
    ll r = 1; b %= m;
    for (; e > 0; e >>= 1, b = b * b % m)
        if (e & 1) r = r * b % m;
    return r;
}
ll inv(ll a, ll m = MOD) { return power(a, m - 2, m); }  // m must be prime
ll add(ll a, ll b, ll m = MOD) { return ((a + b) % m + m) % m; }
ll mul(ll a, ll b, ll m = MOD) { return (a % m) * (b % m) % m; }
// ---------- Input / Output helpers ----------
template <class T> istream &operator>>(istream &in, vector<T> &v) {
    for (auto &x : v) in >> x;
    return in;
}
template <class A, class B> istream &operator>>(istream &in, pair<A, B> &p) { return in >> p.first >> p.second; }
template <class T> ostream &operator<<(ostream &out, const vector<T> &v) {
    for (int i = 0; i < sz(v); ++i) out << v[i] << (i + 1 < sz(v) ? " " : "");
    return out;
}
template <class A, class B> ostream &operator<<(ostream &out, const pair<A, B> &p) { return out << p.first << ' ' << p.second; }
inline void YES() { cout << "YES\n"; }
inline void NO() { cout << "NO\n"; }
inline void yes() { cout << "Yes\n"; }
inline void no() { cout << "No\n"; }
// ---------- Debugging (compiled out on judge unless -DLOCAL) ----------
#ifdef LOCAL
template <class T> void _print(const T &x) { cerr << x; }
template <class T> void _print(const vector<T> &v) {
    cerr << "[";
    for (int i = 0; i < sz(v); ++i) { if (i) cerr << ", "; _print(v[i]); }
    cerr << "]";
}
template <class A, class B> void _print(const pair<A, B> &p) { cerr << "("; _print(p.first); cerr << ", "; _print(p.second); cerr << ")"; }
void _dbg() { cerr << "]\n"; }
template <class H, class... T> void _dbg(const H &h, const T &...t) {
    _print(h);
    if (sizeof...(t)) cerr << ", ";
    _dbg(t...);
}
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "] = [", _dbg(__VA_ARGS__)
#else
#define dbg(...)
#endif
// ---------- Solution ----------
/*
Observation:


Approach:


*/
void solve(){
    int s,n;cin>>s>>n;
    vector<pair<int,int>>a;
    for(int i = 0 ; i < n ; i++){
        int x,y;
        cin>>x>>y;
        a.push_back({x,y});
    }
    sort(all(a));
    for(int i = 0 ; i < n ; i++){
        if(s<=a[i].first){
            cout<<"NO"<<endl;
            return;
        }
        s+=a[i].second;
    }
    cout<<"YES"<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    auto start = chrono::steady_clock::now();
#endif
    int t = 1;
    //cin >> t;  // comment out for single-test problems
    while (t--) solve();
#ifdef LOCAL
    auto stop = chrono::steady_clock::now();
    cerr << "Time: " << chrono::duration_cast<chrono::milliseconds>(stop - start).count() << " ms\n";
#endif
    return 0;
}