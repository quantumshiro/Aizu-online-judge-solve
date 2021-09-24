#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    while(true) {
        int m, n, p;
        cin >> m >> n >> p;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i] >> b[i];
        if (m == 0 and n == 0 and p == 0)
            break;
        
    }
    return 0;
}