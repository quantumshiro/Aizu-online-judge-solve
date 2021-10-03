#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    while(true) {
        int n;
        cin >> n;
        if (n == 0)
            break;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }
        int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (a[i] * n <= sum)
                ans++;
        }
        cout << ans << endl;
    }
}