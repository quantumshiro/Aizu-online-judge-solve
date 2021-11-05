#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> u(n);
    for (int i = 0; i < n; i++)
        std::cin >> u[i];
    int m;
    std::cin >> m;

    bool open = false;
    for (int i = 0; i < m; ++i) {
        std::string str;
        std::cin >> str;

        bool door = false;
        for (int j = 0; j < n; ++j) {
            if (str == u[j]) {
                door = true;
                break;
            }
        }
        if (!door) {
            std::cout << "Unknown " << str << std::endl;
        }
        else if (door and open) {
            std::cout << "Closed by " << str << std::endl;
            open = false;
        }
        else if (door and !open) {
            std::cout << "Opened by " << str << std::endl;
            open = true;
        }
    }
    return 0;
}