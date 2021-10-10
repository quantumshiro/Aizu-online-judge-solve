#include <bits/stdc++.h>

using namespace std;

int main() {
    while(true) {
        int w, h;
        cin >> w >> h;
        int c[h][w];
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cin >> c[i][j];
            }
        }
        if (h == 0 and w == 0)
            break;
        int ans = 0;
        int xx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
        int yy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int used[h][w];
        memset(used, 0, sizeof(used));
        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (used[i][j]) continue;
                if (!used[i][j])
                    continue;
                ans++;
                queue<pair<int, int>> q;
                q.push(pair<int, int>(i, j));
                while (!q.empty()) {
                    pair<int, int> p = q.front();
                    q.pop();
                    int y = p.first;
                    int x = p.second;
                    if (used[x][y])
                        continue;
                    if (!c[y][x])
                        continue;
                    used[y][x] = 1;
                    for (int k = 0; k < 8; k++) {
                        int ny = y + yy[k];
                        int nx = x + xx[k];
                        if (ny < 0 or ny >= h or nx < 0 or nx >= w)
                            continue;
                        if (used[ny][nx])
                            continue;
                        if (!c[ny][nx])
                            continue;
                        q.push(pair<int, int>(ny, nx));
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}