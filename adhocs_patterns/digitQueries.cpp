// https://cses.fi/problemset/task/2431/

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll k;
    cin >> k;
    if (k <= 9)
    {
        cout << k << endl;
        return 0;
    }
    ll digit = 0, powerTen = 1;
    while (true)
    {
        digit++;
        ll chars = 9 * digit * powerTen;
        if (k <= chars)
        {
            ll num = powerTen + (k + digit - 1) / digit - 1;
            string s = to_string(num);
            cout << s[k % digit == 0 ? digit - 1 : k % digit - 1] << endl;
            break;
        }
        k = k - chars;
        powerTen *= 10LL;
    }
}