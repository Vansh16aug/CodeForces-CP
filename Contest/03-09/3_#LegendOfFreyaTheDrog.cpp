#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t; // number of test cases
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        // Calculate the minimum number of moves required to reach x and y
        int moves_x = (x + k - 1) / k; // equivalent to ceil(x / k)
        int moves_y = (y + k - 1) / k; // equivalent to ceil(y / k)

        // Since she alternates directions, total moves will be moves_x + moves_y
        cout << moves_x + moves_y << endl;
    }

    return 0;
}
