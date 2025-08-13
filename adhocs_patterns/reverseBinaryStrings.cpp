// https://codeforces.com/contest/1437/problem/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll c1 = 0, c0 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            if (s[i] == '0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
    }
    cout << max(c0, c1) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}