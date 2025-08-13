#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, q;
    cin >> n >> k >> q;
    vector<long long> diff(200001, 0);
    for (long long i = 0; i < n; i++)
    {
        long long l, r;
        cin >> l >> r;
        diff[l]++;
        diff[r + 1]--;
    }
    for (long long i = 1; i <= 200000; i++)
        diff[i] += diff[i - 1];
    for (long long i = 0; i <= 200000; i++)
        diff[i] = (diff[i] >= k);
    for (long long i = 1; i <= 200000; i++)
        diff[i] += diff[i - 1];
    while (q--)
    {
        long long l, r;
        cin >> l >> r;
        cout << diff[r] - diff[l - 1] << endl;
    }
    return 0;
}