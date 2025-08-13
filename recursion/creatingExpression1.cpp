// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V

#include <bits/stdc++.h>
using namespace std;
class Solution
{
    bool f(int i, vector<int> &arr, int x, int sum)
    {
        if (i == arr.size())
        {
            if (sum == x)
            {
                return true;
            }
            return false;
        }
        bool f1 = f(i + 1, arr, x, sum + arr[i]);
        bool f2 = f(i + 1, arr, x, sum - arr[i]);
        return f1 || f2;
    }
    int main()
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (f(1, arr, x, arr[0]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
};
class Solution2
{
#include <bits/stdc++.h>
    using namespace std;
    bool f(int i, vector<int> &arr, int x, int &sum)
    {
        if (i == arr.size())
        {
            if (sum == x)
            {
                return true;
            }
            return false;
        }
        sum += arr[i];
        bool f1 = f(i + 1, arr, x, sum);
        sum -= arr[i]; // for removing the plus
        sum -= arr[i]; // for adding the minus
        bool f2 = f(i + 1, arr, x, sum);
        sum += arr[i];
        return f1 || f2;
    }
    int main()
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (f(1, arr, x, arr[0]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
};