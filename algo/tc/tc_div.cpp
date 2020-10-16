#include <bits/stdc++.h>
using namespace std;

#define ONLINE_JUDGE

#define FOR(i, start, end, growth) for (int i = start; i < end; i += growth)
#define RFOR(i, start, end, growth) for (int i = start; i >= end; i -= growth)
#define REP(i, end) FOR(i, 0, end, 1)
#define RREP(i, begin) RFOR(i, begin, 0, 1)

#define INF (int)1e9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef map<int, int> mii;
typedef unordered_map<int, int> umap_ii;
typedef unordered_map<string, int> umap_si;

/**
 * Limits in C++ for reference
 * _____________________________________________________________________________________
 * |Sr| Macro Name | Description                     | Value
 * |No|____________|_________________________________|__________________________________
 * |1.| ULLONG_MAX | Maximum value unsigned long long|
 * 18,446,744,073,709,551,615 (10^20) |2.| LLONG_MAX  | Maximum value long long
 * | 9,223,372,036,854,775,807 (10^19) |3.| LLONG_MIN  | Minimum value long long
 * |-9,223,372,036,854,775,808 -1*(10^19) |4.| INT_MAX    | Maximum value int |
 * 2,147,483,647 (10^10) |5.| INT_MIN    | Minimum value int |-2,147,483,648
 * (10^10)
 */

ll correct_mod(ll a, ll mod = MOD) {
    return ((a % mod) + mod) % mod;
}

ll add_mod(ll a, ll b, ll mod = MOD) {
    return correct_mod(correct_mod(a, mod) + correct_mod(b, mod), mod);
}

ll sub_mod(ll a, ll b, ll mod = MOD) {
    return correct_mod(correct_mod(a, mod) - correct_mod(b, mod), mod);
}

ll mul_mod(ll a, ll b, ll mod = MOD) {
    return correct_mod(correct_mod(a, mod) * correct_mod(b, mod), mod);
}

ll fastpow (ll a, ll n, ll mod = MOD) {
    if (n == 0LL) return 1LL;
    if (n % 2 != 0) return (a * fastpow(a, n - 1, mod)) % mod;
    ll tmp = fastpow(a, n / 2, mod);
    return (tmp * tmp) % mod;
}

ll div_mod(ll a, ll b, ll mod = MOD) {
    return mul_mod(a, fastpow(b, mod - 2, mod), mod);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/illantalex/projects/competitive-programming-vscode-template/input.txt", "r", stdin);
    freopen("/home/illantalex/projects/competitive-programming-vscode-template/output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << div_mod(add_mod(mul_mod(a, d), mul_mod(b, c)), mul_mod(b, d));
    return 0;
}
