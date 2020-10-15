#include <bits/stdc++.h>
using namespace std;

// #define ONLINE_JUDGE

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

ll correct_mod(ll a, ll mod) {
    return ((a % mod) + mod) % mod;
}

ll add_mod(ll a, ll b, ll mod) {
    return correct_mod(correct_mod(a, mod) + correct_mod(b, mod), mod);
}

ll div_mod(ll a, ll b, ll mod) {
    return correct_mod(correct_mod(a, mod) - correct_mod(b, mod), mod);
}

ll mul_mod(ll a, ll b, ll mod) {
    return correct_mod(correct_mod(a, mod) * correct_mod(b, mod), mod);
}

ll gcd(ll a, ll b) {
    if (a < b) return gcd(b, a);
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll x1, y1, x2, y2;
ll extgcd(ll r1, ll r2, ll &x1, ll &y1, ll &x2, ll &y2, bool first = true) {
    if (r1 < r2) return extgcd(r2, r1, y1, x1, y2, x2, first);
    if (r2 == 0) return r1;
    ll x = x1 - (r1 / r2) * x2;
    ll y = y1 - (r1 / r2) * y2;
    x1 = x2;
    x2 = x;
    y1 = y2;
    y2 = y;
    return extgcd(r2, r1 % r2, x1, y1, x2, y2, false);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/illantalex/projects/competitive-programming-vscode-template/input.txt", "r", stdin);
    freopen("/home/illantalex/projects/competitive-programming-vscode-template/output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << n;
    return 0;
}
