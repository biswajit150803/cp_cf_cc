#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums.begin(), nums.end(), greater<int>());
    vector<long long> diff(n + 1, 0);
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        diff[l]++;
        diff[r + 1]--;
    }
    for (int i = 1; i < n; i++)
        diff[i] += diff[i - 1];
    sort(diff.begin(), diff.end(), greater<int>());
    long long ans = 0;
    for (int i = 0; i < n; i++)
        ans += nums[i] * diff[i];
    cout << ans << endl;
    return 0;
}