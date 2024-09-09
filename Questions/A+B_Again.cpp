#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long first = n / 10;
        long long second = n % 10;
        cout<<first+second<<endl;
    }
    return 0;
}