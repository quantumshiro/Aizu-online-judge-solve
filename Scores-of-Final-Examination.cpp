#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    while(true) {
        cin >> n >> m;
        if (n == 0 and m == 0)
            break;
        int p[m][n];
        vector<int> total(n, 0);
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j) {
                cin >> p[i][j];
                total[j] += p[i][j];
            }
        }
        sort(total.begin(), total.end());
        cout << total[n - 1] << endl;
    }
}