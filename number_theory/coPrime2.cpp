// https://atcoder.jp/contests/abc215/tasks/abc215_d

#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 5;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    // Step 1: collect bad primes
    set<int> bad_primes;
    for (int num : v) {
        int x = num;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                bad_primes.insert(j);
                while (x % j == 0) x /= j;
            }
        }
        if (x > 1) bad_primes.insert(x);
    }

    // Step 2: sieve marking
    vector<bool> ok(m + 1, true);
    ok[0] = false; // we don't use 0

    for (int p : bad_primes) {
        for (int j = p; j <= m; j += p) {
            ok[j] = false;
        }
    }

    // Step 3: collect result
    vector<int> ans;
    for (int i = 1; i <= m; i++) {
        if (ok[i]) ans.push_back(i);
    }

    cout << ans.size() << "\n";
    for (int x : ans) cout << x << "\n";

    return 0;
}
