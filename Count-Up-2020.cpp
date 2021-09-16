#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;
        vector<int> d(n);
        for (int i = 0; i < n; ++i)
            cin >> d[i];
        if (n == 0)
            break;
        int list[4] = {2, 0, 2, 0};
        int j = 0;
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (d[i] == list[j])
            {
                ++j;
            }
            else
            {
                if (d[i] == 2)
                {
                    j = 1;
                }
                else
                {
                    j = 0;
                }
            }
            if (j == 4)
            {
                ++ans;
                j = 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}