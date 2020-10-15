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

// void solve(ll test_case)
// {
//     // Do your thing here :)
//     cout << test_case << "\n";
// }

// int arr[200100], dp[200100];
// vi a;

// ll f(int i) {
//     if (i < 0) return 0;
//     if (i == 0) return 1;
//     if (dp[i] != -1) return dp[i];
//     if (s[i - 1] != '0') {
//         return 0;
//     } else {
//         dp[i] = (f(i - 1) + f(i - 2) + f(i - 3)) % MOD;
//         return dp[i];
//     }
// }

ll corr_mod(ll a) {
    return ((a % MOD) + MOD) % MOD;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vl dp, dp1;
    string s;

    int n, k;
    cin >> n >> k;
    cin >> s;
    // a.resize(n + 1);
    dp.assign(n + 1, 0);
    dp1.resize(n + 1);
    dp[0] = 1;
    dp[1] = 1 - (s[0] - '0');
    if (s[1] == '0') {
        dp[2] = dp[0] + dp[1];
    } else {
        dp[2] = 0;
    }
    ll sm = dp[0] + dp[1] + dp[2];
    for (int i = 3; i <= n; ++i) {
        if (s[i - 1] == '0') {
            dp[i] = sm;
        }
        if (i>=k) {
            sm += corr_mod(dp[i] % MOD - dp[i - k] % MOD);
        } else {
            sm += dp[i] % MOD;
        }
        sm %= MOD;
    }
    for (int i = 3; i <= n; ++i) {
        if (s[i - 1] == '0') {
            if (i >= k) {
                // dp[i] = 0;
                // for (int j = i - k; j < i; ++j)
                //     dp[i] += (dp[j]) % MOD;
                dp1[i] = corr_mod(dp[i] % MOD - dp[i - k] % MOD);
            } else {
                dp1[i] = (dp[i - 1] % MOD + dp[i - 2] % MOD) % MOD;
            }
        } else {
            dp1[i] = 0;
        }
    }

    cout << dp[n] << endl;
    return 0;
}
