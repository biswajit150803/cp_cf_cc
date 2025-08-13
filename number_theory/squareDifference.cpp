// https://codeforces.com/problemset/problem/1033/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(ll n) {
    if (n < 2) return false;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;
        if (a - b != 1) {
            cout << "NO\n";
        } else {
            if (isPrime(a + b)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
