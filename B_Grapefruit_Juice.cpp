/** Author: Ashmit | Codeforces */
#include <bits/stdc++.h>
using namespace std;
using ll = long long; using ull = unsigned long long; using i128 = __int128_t; using ld = long double;
using pii = pair<int, int>; using pll = pair<ll, ll>;
using vi = vector<int>; using vll = vector<ll>; using vvi = vector<vi>; using vvll = vector<vll>;
using vb = vector<bool>; using vs = vector<string>;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define each(x, v) for (auto &x : v)
#define endl '\n'
constexpr int MOD = 1'000'000'007, MOD2 = 998'244'353, INFI = 2e9;
constexpr ll INF = 4e18;
constexpr ld EPS = 1e-9;
const ld PI = acosl(-1.0L);
constexpr int dx4[] = {0, 1, 0, -1}, dy4[] = {1, 0, -1, 0};
constexpr int dx8[] = {0, 1, 1, 1, 0, -1, -1, -1}, dy8[] = {1, 1, 0, -1, -1, -1, 0, 1};
template <class T> bool chmin(T &a, const T &b) { return b < a ? a = b, true : false; }
template <class T> bool chmax(T &a, const T &b) { return a < b ? a = b, true : false; }
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll rnd(ll l, ll r) { return uniform_int_distribution<ll>(l, r)(rng); }
ll power(ll b, ll e, ll m = MOD) {
    ll r = 1; b %= m;
    for (; e > 0; e >>= 1, b = b * b % m) if (e & 1) r = r * b % m;
    return r;
}
ll inv(ll a, ll m = MOD) { return power(a, m - 2, m); }  // m prime
ll add(ll a, ll b, ll m = MOD) { return ((a + b) % m + m) % m; }
ll mul(ll a, ll b, ll m = MOD) { return (a % m) * (b % m) % m; }
// ---- Bit helpers ----
inline int popcnt(ull x) { return __builtin_popcountll(x); }
inline int ctz(ull x) { return x ? __builtin_ctzll(x) : 64; }
inline int clz(ull x) { return x ? __builtin_clzll(x) : 64; }
inline int lg(ull x) { return x ? 63 - __builtin_clzll(x) : -1; }    // floor(log2)
inline int bitlen(ull x) { return x ? 64 - __builtin_clzll(x) : 0; }
inline int parity(ull x) { return __builtin_parityll(x); }
inline bool isPow2(ull x) { return x && !(x & (x - 1)); }
inline ull lowbit(ull x) { return x & (~x + 1); }
inline ull highbit(ull x) { return x ? 1ULL << lg(x) : 0; }
inline ull rmlow(ull x) { return x & (x - 1); }                      // clear lowest set bit
inline ull nxtPow2(ull x) { return x <= 1 ? 1 : 1ULL << (64 - __builtin_clzll(x - 1)); } // smallest 2^k >= x
inline ull prvPow2(ull x) { return highbit(x); }                     // largest 2^k <= x
inline bool getb(ull x, int i) { return (x >> i) & 1; }
inline ull setb(ull x, int i) { return x | (1ULL << i); }
inline ull clrb(ull x, int i) { return x & ~(1ULL << i); }
inline ull flpb(ull x, int i) { return x ^ (1ULL << i); }
inline ull mask(int k) { return k >= 64 ? ~0ULL : (1ULL << k) - 1; }
inline ull gray(ull x) { return x ^ (x >> 1); }
inline ull ungray(ull g) { ull x = 0; for (; g; g >>= 1) x ^= g; return x; }
inline ull rev64(ull x) {
    x = ((x >> 1) & 0x5555555555555555ULL) | ((x & 0x5555555555555555ULL) << 1);
    x = ((x >> 2) & 0x3333333333333333ULL) | ((x & 0x3333333333333333ULL) << 2);
    x = ((x >> 4) & 0x0F0F0F0F0F0F0F0FULL) | ((x & 0x0F0F0F0F0F0F0F0FULL) << 4);
    return __builtin_bswap64(x);
}
inline ull nextComb(ull x) { ull c = x & (~x + 1), r = x + c; return (((r ^ x) >> 2) / c) | r; } // Gosper: next with same popcount
// Tricks: swap a^=b,b^=a,a^=b | opposite signs (a^b)<0 | max b^((a^b)&-(a<b)) | x%2^k x&((1<<k)-1)
//   x+y==(x^y)+2*(x&y) | x|y==(x^y)+(x&y) | x^y==(x|y)-(x&y) | xor 0..n: n%4==0?n:n%4==1?1:n%4==2?n+1:0
// Loops: submasks of m subs(s,m) | set bits: for(ull t=m;t;t&=t-1){int i=ctz(t);} | all submasks of all masks O(3^n)
#define subs(s, m) for (ll s = (m), _go = 1; _go; _go = s > 0, s = (s - 1) & (m))
// SOS DP, O(n*2^n): subset sums / superset sums
template <class T> void sosSubset(vector<T> &f, int n) { rep(i, 0, n) rep(m, 0, 1 << n) if ((m >> i) & 1) f[m] += f[m ^ (1 << i)]; }
template <class T> void sosSuperset(vector<T> &f, int n) { rep(i, 0, n) rep(m, 0, 1 << n) if (!((m >> i) & 1)) f[m] += f[m ^ (1 << i)]; }
// XOR basis over GF(2); insert() returns true if x was independent
struct XorBasis {
    ull b[64] = {};
    bool insert(ull x) {
        for (int i = 63; i >= 0 && x; --i) {
            if (!((x >> i) & 1)) continue;
            if (!b[i]) { b[i] = x; return true; }
            x ^= b[i];
        }
        return false;
    }
    ull maxXor() const { ull r = 0; for (int i = 63; i >= 0; --i) if ((r ^ b[i]) > r) r ^= b[i]; return r; }
    bool canMake(ull x) const { for (int i = 63; i >= 0 && x; --i) if ((x >> i) & 1) { if (!b[i]) return false; x ^= b[i]; } return true; }
};
// ---- Binary / base conversion ----
string to_bin(ull x) {
    if (!x) return "0";
    int n = 64 - __builtin_clzll(x);
    string s(n, '0');
    for (int i = 0; i < n; ++i) if ((x >> i) & 1) s[n - 1 - i] = '1';
    return s;
}
string to_bin(ull x, int w) {  // fixed width w
    string s(w, '0');
    for (int i = 0; i < w && i < 64; ++i) if ((x >> i) & 1) s[w - 1 - i] = '1';
    return s;
}
ull from_bin(const string &s) { ull r = 0; for (char c : s) r = (r << 1) | (c & 1); return r; }
ll from_bin_mod(const string &s, ll m = MOD) { ll r = 0; for (char c : s) r = ((r << 1) | (c & 1)) % m; return r; }
string bin_inc(string s) {  // +1 on long binary string
    int i = sz(s) - 1;
    while (i >= 0 && s[i] == '1') s[i--] = '0';
    if (i >= 0) s[i] = '1'; else s.insert(s.begin(), '1');
    return s;
}
string to_base(ull x, int b) {  // base 2..36
    if (!x) return "0";
    string s;
    for (; x; x /= b) s += "0123456789abcdefghijklmnopqrstuvwxyz"[x % b];
    reverse(all(s));
    return s;
}
ull from_base(const string &s, int b) {
    ull r = 0;
    for (char c : s) r = r * b + (isdigit(c) ? c - '0' : tolower(c) - 'a' + 10);
    return r;
}
// Library: bitset<64>(x).to_string(), stoull(s, nullptr, 2), bitset<64>(s).to_ullong(), __builtin_ffsll(x)
// ---- I/O ----
template <class T> istream &operator>>(istream &in, vector<T> &v);
template <class A, class B> istream &operator>>(istream &in, pair<A, B> &p);
template <class T> ostream &operator<<(ostream &out, const vector<T> &v);
template <class A, class B> ostream &operator<<(ostream &out, const pair<A, B> &p);
template <class T> istream &operator>>(istream &in, vector<T> &v) { for (auto &x : v) in >> x; return in; }
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
// ---- Debug (only with -DLOCAL) ----
#ifdef LOCAL
template <class T> void _print(const T &x) { cerr << x; }
template <class T> void _print(const vector<T> &v);
template <class A, class B> void _print(const pair<A, B> &p);
template <class T> void _print(const vector<T> &v) {
    cerr << "[";
    for (int i = 0; i < sz(v); ++i) { if (i) cerr << ", "; _print(v[i]); }
    cerr << "]";
}
template <class A, class B> void _print(const pair<A, B> &p) { cerr << "("; _print(p.first); cerr << ", "; _print(p.second); cerr << ")"; }
void _dbg() { cerr << "]\n"; }
template <class H, class... T> void _dbg(const H &h, const T &...t) { _print(h); if (sizeof...(t)) cerr << ", "; _dbg(t...); }
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "] = [", _dbg(__VA_ARGS__)
#else
#define dbg(...)
#endif
/*
Observation:


Approach:


*/
void solve() {
    ll n,k,p;
    cin>>n>>k>>p;
    vector<ll>a(n);
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    sort(rall(a));
    int r=n-1,l=r-k+1;
    ll c=0;
    while(l>=0){
        ll s=accumulate(a.begin()+l,a.begin()+r+1,0LL);
        if(p>s) c+=p;
        else c+=s;
        r=l-1;
        l=r-k+1;
    }
    if(r>=0) c+=accumulate(a.begin(),a.begin()+r+1,0LL);
    cout<<c<<endl;
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
    cin >> t;  // remove for single-test
    while (t--) solve();
#ifdef LOCAL
    cerr << "Time: " << chrono::duration_cast<chrono::milliseconds>(chrono::steady_clock::now() - start).count() << " ms\n";
#endif
    return 0;
}