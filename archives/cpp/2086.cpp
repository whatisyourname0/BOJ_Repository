#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
#define MOD 1000000000
using mat = vector<vector<ll>>;

ll a, b;
mat matrix;
mat result;

mat mul(const mat& a, const mat& b) {
    mat temp;
    temp.resize(2);
    FOR(i, 0, 2) { temp[i].resize(2); }

    FOR(i, 0, 2) {
        FOR(j, 0, 2) {
            temp[i][j] = 0;
        }
    }

    FOR(i, 0, 2) {
        FOR(j, 0, 2) {
            FOR(k, 0, 2) {
                temp[i][j] += a[i][k] * b[k][j];
                temp[i][j] %= MOD;
            }
        }
    }

    return temp;
}  

mat matrix_power(const ll& n) {
    if (n == 1) { return matrix; }

    mat val = matrix_power(n/2);
    val = mul(val, val);
    if (n%2 == 0) {
        return val;
    } else {
        return mul(matrix, val);
    }
}

int main() {
    fastio

    matrix.resize(2);
    FOR(i, 0, 2) { matrix[i].resize(2); }
    matrix[0][0] = 1; matrix[0][1] = 1;
    matrix[1][0] = 1; matrix[1][1] = 0;

    cin >> a >> b;
    ll first = matrix_power(b+1)[0][0];
    ll second = matrix_power(a)[0][0];
    cout << (first-second >= 0 ? first-second : first-second+MOD);

    return 0;
}