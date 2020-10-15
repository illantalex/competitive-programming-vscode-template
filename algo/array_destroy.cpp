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

ll arr[200100], summa[2000], ops[2000];

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll left[2], right[2], sm[2];
    cin >> n;
    REP(i, n)
    cin >> arr[i];
    for (int j = 0; j < 2; j++) {
        ll sum = 0;
        int i;
        for (i = j; i < n; i += 2) {
            sum += arr[i];
            summa[i] = sum;
        }
        sm[j] = sum;
        left[j] = j;
        right[j] = i - 2;
    }
    ll mx, l, r;
    if (sm[0] > sm[1]) {
        mx = sm[0];
        l = left[0];
        r = right[0];
    } else {
        mx = sm[1];
        l = left[1];
        r = right[1];
    }
    for (int j = 0; j < 2; j++) {
        for (int k = j; k < n; k += 2) {
            for (int i = j; i < k; i += 2) {
                if (summa[k] - summa[i] > mx) {
                    mx = summa[k] - summa[i];
                    r = k;
                    l = i + 2;
                }
            }
        }
    }
    // l += 2;
    int cnt = 0;
    cout << mx << endl;
    while (l + 1 <= r - 1) {
        ops[cnt] = l + 2;
        cnt++;
        // cout << l + 2 << endl;
        r -= 2;
        n -= 2;
    }
    for (int i = n; i > l + 1; --i) {
        ops[cnt] = i;
        cnt++;
        // cout << i << endl;
    }
    for (int i = 0; i < l; ++i) {
        ops[cnt] = 1;
        cnt++;
        // cout << 1 << endl;
    }
    cout << cnt << endl;
    REP(i, cnt)
    cout << ops[i] << endl;
    return 0;
}
