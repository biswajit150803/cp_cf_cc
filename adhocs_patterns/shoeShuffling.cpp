// https://codeforces.com/problemset/problem/1691/B

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> permut(n);
    for (int i = 0; i < n;)
    {
        permut[i] = i;
        int temp = arr[i], size = 1;
        i++;
        while (i < n && arr[i] == temp)
        {
            permut[i] = permut[i - 1];
            permut[i - 1] = i;
            i++;
            size++;
        }
        if (size == 1)
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << permut[i] + 1 << " ";
    }
    cout << endl;
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