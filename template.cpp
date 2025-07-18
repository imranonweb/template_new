#include <bits/stdc++.h>
using namespace std;

// 🏎️ Fast I/O
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// 🧾 Typedefs
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using vll = vector<ll>;
using pii = pair<int, int>;

// 🪄 Macros
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define eb emplace_back
#define setpr(n) cout << fixed << setprecision(n)

// 🧮 Math macros
#define gcd(a, b) __gcd((a), (b))
#define lcm(a, b) ((a) / gcd((a), (b)) * (b))

// 🔐 Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double EPS = 1e-9;

// 🔍 Debug (optional - disable on online judge)
#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << nl;
#else
    #define debug(x)
#endif

// 🧠 Solve function
void solve() {
    // your code here
}

// 🚀 Main
int main() {
    FAST_IO
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
