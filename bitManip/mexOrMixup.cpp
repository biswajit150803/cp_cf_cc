#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    int arr[300000];
    arr[0] = 0;
    for (int i = 1; i < 300000; i++)
    {
        arr[i] = arr[i - 1] ^ i;
    }
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll xori = arr[a-1];
        if (xori == b)
        {
            cout << a << endl;
        }
        else if ((xori ^ b) == a)
        {
            cout << a + 2 << endl;
        }
        else
        {
            cout << a + 1 << endl;
        }
    }
}