#include <bits/stdc++.h>
using namespace std;

// Type aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;

// Constants
const int MOD = 1e9 + 7;
const int MOD2 = 998244353;
const ll INF = 1e18;
const int IINF = 1e9;
const ld PI = acosl(-1.0);
const ld EPS = 1e-9;

// Macros
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORR(i, a, b) for (int i = (a); i >= (b); i--)
#define rep(i, n) FOR(i, 0, n)
#define repr(i, n) FORR(i, n - 1, 0)

// Debug (comment out before submission)
#ifdef LOCAL
#define debug(x) cerr << #x << " = " << x << endl
#define debugv(v) cerr << #v << " = "; for(auto& x : v) cerr << x << " "; cerr << endl
#else
#define debug(x)
#define debugv(v)
#endif

// Input/Output
template<typename T> void read(T& x) { cin >> x; }
template<typename T, typename... Args> void read(T& x, Args&... args) { cin >> x; read(args...); }
template<typename T> void print(const T& x) { cout << x << endl; }
template<typename T, typename... Args> void print(const T& x, Args... args) { cout << x << " "; print(args...); }

// Read vector
template<typename T> vector<T> readv(int n) {
    vector<T> v(n);
    for (auto& x : v) cin >> x;
    return v;
}

// Utility functions
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<typename T> T power(T a, T b, T mod) {
    T res = 1; a %= mod;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod; b >>= 1;
    }
    return res;
}
template<typename T> bool chmin(T& a, T b) { return b < a ? a = b, true : false; }
template<typename T> bool chmax(T& a, T b) { return b > a ? a = b, true : false; }

// Direction arrays for grid problems
const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

void solve() {
    int n;
    cin >> n;
    int x = 0;

    while (n--) {
        string s;
        cin >> s;
        if (s.find('+') != string::npos)
            x++;
        else
            x--;
    }
    cout << x << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // Comment out for single test case
    
   
    solve();
    
    
    return 0;}