#include <bits/stdc++.h>
#define TC int (_T); cin >> _T; while (_T--)
#define FOR(i, start, end) for (int i = start; i < end; i++)
#define ALL(x) (x).begin(), (x).end()
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #pragma GCC optimize("Ofast")
using namespace std;
using ll = long long;
//-------------------------------------
int N;
vector<int> nums;

int main() { fastio

    TC {
        nums.clear();
        cin >> N;
        nums.resize(N);

        FOR(i, 0, N) { cin >> nums[i]; }

        cout << *min_element(ALL(nums)) << ' ' << *max_element(ALL(nums)) << endl;
    }

    return 0;
}