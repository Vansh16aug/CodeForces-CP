#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    while (m--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> temp = arr;
        sort(arr.begin(), arr.end());
        if (temp != arr && k <= 1)
        {
            cout << "NO" << endl;
        }
        else if (temp == arr && k <= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}