// https://codeforces.com/problemset/problem/1095/C

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k > n)
    {
        cout << "NO\n";
        return;
    }
    vector<ll> v;
    for (int i = 0; i < 32; i++)
    {
        if (n & (1 << i))
        {
            v.push_back(1 << i);
        }
    }
    if (v.size() > k)
    {
        cout << "NO\n";
        return;
    }
    int i = 0,len=v.size();
    while (len < k)
    {
        while (v[i] == 1)
        {
            i++;
        }

        v[i] = v[i] / 2;
        v.push_back(v[i]);
        len++;
    }
    cout << "YES\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
int main()
{
    solve();
    return 0;
}