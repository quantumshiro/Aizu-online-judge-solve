#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    while(true) {
        int n, m, p;
        std::cin >> m >> n >> p;
        if (m == 0 && n == 0 && p == 0) break;
        std::vector<bool> infect(m + 1, false);
        infect[p] = true;
        for (int i = 0; i < n; ++i)
        {
            int a, b;
            std::cin >> a >> b;
            infect[a] = infect[b] = infect[a] or infect[b];
        }
        std::cout << std::count(infect.begin(), infect.end(), true) << std::endl;
    }
    return 0;
}