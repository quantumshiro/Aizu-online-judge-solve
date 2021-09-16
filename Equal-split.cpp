#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i, x, n) for (int i = x; i < (n); i++)
#define all(x) (x).begin(), (x).end()
#define endl "\n";
#define pb push_back
#define mp make_pair
using namespace std;

int main()
{
    //cout << fixed << setprecision(10);
    while (true) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    if (n == 0 and m == 0)
    {
        break;
    }
    int pay = 0;
    rep(i, n)
    {
        pay += min(m / n, a[i]);
    }
    cout << pay << endl;
    }
    return 0;
}