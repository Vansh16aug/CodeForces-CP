#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        // colums = 4
        //  rows = n
        long long n;
        cin >> n;
        // to store the indexes of #
        vector<long long> ans(n);
        for (long long i = 0; i < n; i++)
        {
            string row;
            cin >> row;
            for (long long j = 0; j < row.size(); j++)
            {
                if (row[j] == '#')
                {
                    // 1-based
                    ans[i] = j + 1;
                    break;
                }
            }
        }
        // storing
        for (int i = n - 1; i >= 0; --i)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}