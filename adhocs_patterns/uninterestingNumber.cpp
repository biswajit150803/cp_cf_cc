// https://codeforces.com/problemset/problem/2050/C

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int two = 0, three = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2')
            two++;
        else if (s[i] == '3')
            three++;
        sum = sum + (s[i] - '0');
    }
    if (sum % 9 == 0)
    {
        cout << "YES\n";
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        int target;
        if (i == 0)
        {
            target = 9 - sum % 9;
        }
        else
        {
            target = 18 - sum % 9;
        }
        for (int threeReq = 0; 6 * threeReq <= target && threeReq <= three; threeReq++)
        {
            // suppose we need to cover 14 then we need 2 3's and 1 2's
            int targetLeft = target - 6 * threeReq;
            int twoReq = targetLeft / 2;
            if (targetLeft % 2 == 0 && twoReq <= two)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}