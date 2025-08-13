#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> needed(n, 0);
    for (int i = 0; i < 30; i++)
    {
        bool found = 0;
        for (int j = 0; j < n; j++)
        {
            if ((arr[j] & (1 << i)) && found == 0)
            {
                found = 1;
            }
            else if ((arr[j] & (1 << i))==0 && found == 1)
            {
                needed[j] = needed[j] + (1 << i);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << needed[i] << " ";
    }
    cout << endl;
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}