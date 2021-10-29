#include <iostream>
#include <algorithm>

int main() {
    int n;
    while (std::cin >> n, n) {
        int ans = 0;
        for (int i = 1; i < n; ++i) {
            int sum = 0;
            for (int j = i; sum < n; ++j) {
                sum += j;
            }
            if (sum == n) {
                ans++;
            }
        }
        std::cout << ans << std::endl;
    }
}