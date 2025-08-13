#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<vector<char>> forest(n, vector<char>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> forest[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            forest[i][j] = (forest[i][j] == '*');
        }
    }
    vector<vector<int>> prefix(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            prefix[i][j] = forest[i][j];
            if (i > 0)
                prefix[i][j] += prefix[i - 1][j];
            if (j > 0)
                prefix[i][j] += prefix[i][j - 1];
            if (i > 0 && j > 0)
                prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }
    for (int i = 0; i < q; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--;
        y1--;
        x2--;
        y2--;
        int sum = prefix[x2][y2];
        if (x1 > 0)
            sum -= prefix[x1 - 1][y2];
        if (y1 > 0)
            sum -= prefix[x2][y1 - 1];
        if (y1 > 0 && x1 > 0)
            sum += prefix[x1 - 1][y1 - 1];
        cout << sum << endl;
    }
    return 0;
}