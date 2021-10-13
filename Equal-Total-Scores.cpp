#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    while(true) {
        int n, m;
        cin >> n >> m;
        if (n == 0 and m == 0)
            break;
        vector<int> taro(n);
        vector<int> hanako(m);

        int taro_sum = 0, hanako_sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> taro[i];
            taro_sum += taro[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> hanako[i];
            hanako_sum += hanako[i];
        }
        bool flag = false;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (taro_sum - taro[i] + hanako[j] == hanako_sum - hanako[j] + taro[i]) {
                    cout << taro[i] << " " << hanako[j] << endl;
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (!flag)
            cout << -1 << endl;
    }
}