#include <bits/stdc++.h>
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define endl "\n"
#define INT_INF 2147483647
#define MOD 1
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int d, n, s, p; cin >> d >> n >> s >> p;
        if (d + p*n > s*n) {
            cout << "do not parallelize" << endl;
        } else if (d + p*n == s*n) {
            cout << "does not matter" << endl;
        } else {
            cout << "parallelize" << endl;
        }
    }    

    return 0;
}