#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for (long long i = 0; i < n; i++)
        cin >> nums[i];
    map<long long, long long> mp;
    mp[0] = 1;
    long long preSum = 0, cnt = 0;
    for (long long i = 0; i < n; i++)
    {
        preSum += nums[i];
        mp[(preSum % n + n) % n]++;
    }
    for (auto x : mp)
        cnt += (x.second * (x.second - 1) / 2);
    cout << cnt << endl;
    return 0;
}