#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000007
using mat = vector<vector<int>>;

ll gcd(const ll& a, const ll& b) {
    return b == 0 ? a : gcd(b, a%b);
}

int main() {
    fastio

    ll n, m; cin >> n >> m;
    ll GCD = gcd(n, m);
    ll exp = GCD - 1;
    while (exp) {
        if (exp & 1) {
            ll temp[2][2];
            memset(temp, 0, sizeof(temp));

        }
    }

    return 0;
}