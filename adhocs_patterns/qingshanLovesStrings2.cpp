// https://codeforces.com/contest/1889/problem/A

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    deque<char> characters;
    vector<int> answer;
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        cnt0 += (s[i] == '0');
        cnt1 += (s[i] == '1');
    }
    if (cnt1 != cnt0)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        characters.push_back(s[i]);
    }
    int d = 0;
    while (!characters.empty())
    {
        if (characters.front() == characters.back())
        {
            if (characters.front() == '0')
            {
                characters.push_back('0');
                characters.push_back('1');
                answer.push_back(n - d);
            }
            else
            {
                characters.push_front('1');
                characters.push_front('0');
                answer.push_back(0 + d);
            }
            n += 2;
        }

        while (!characters.empty() && characters.front() != characters.back())
        {
            characters.pop_front();
            characters.pop_back();
            d++;
        }
    }
    cout<<answer.size()<<endl;
    if (answer.size() == 0)
    {
        cout << endl;
    }
    else
    {
        for (int i = 0; i < answer.size(); i++)
        {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
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