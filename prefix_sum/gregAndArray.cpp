#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    vector<long long> a(n,0);
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    vector<long long> diff(n+1,0);
    vector<array<long long, 3>> v;
    for (long long i = 0; i < m; i++)
    {
        long long l, r, d;
        cin >> l >> r >> d;
        l--;
        r--;
        v.push_back({l, r, d});
    }
    vector<long long> diff2(m+1,0);
    while (k--)
    {
        long long x, y;
        cin >> x >> y;
        x--;
        y--;
        diff2[x]++;
        diff2[y + 1]--;
    }
    for (long long i = 1; i < m; i++)
        diff2[i] += diff2[i - 1];
    for (long long i = 0; i < m; i++)
    {
        diff[v[i][0]] += diff2[i] * v[i][2];
        diff[v[i][1] + 1] -= diff2[i] * v[i][2];
    }
    for (long long i = 1; i < n; i++)
        diff[i] += diff[i - 1];
    for (long long i = 0; i < n; i++){
        a[i] += diff[i];
        cout<<a[i]<<" ";
    }
    cout << endl;
    return 0;
}