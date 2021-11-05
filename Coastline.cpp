#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    while(true) {
        int t, d, l;
        std::cin >> t >> d >> l;
        if (t == 0)
            break;
        std::vector<int> imos(t + 1, 0);
        for (int i = 0; i < t; ++i) {
            int a;
            std::cin >> a;
            if (a >= l) {
                imos[i]++;
                imos[std::min(i+d, t)]--;
            }
        }
        int ans = 0;
        for (int i = 0; i < t; ++i) {
            imos[i+1] += imos[i];
            if (imos[i] > 0 and i < t - 1)
                ans++;
        }
        std::cout << ans << std::endl;
    }
}