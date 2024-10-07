#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
const double PI = acos(-1);
typedef long long ll;
typedef unsigned long long ull;
#define SetBit(x, k) (x |= (1ll << k))
#define ClearBit(x, k) (x &= ~(1ll << k))
#define CheckBit(x, k) ((x >> k) & 1)
#define toggleBit(x, k) (x ^ (1ll << k))
#define FAST                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)

int main()
{
    FAST;
    ll n, m, i, j;
    cin >> n >> m;
    if (m > 2 * n + 2 || n > m + 1)
    {
        cout << -1 << endl;
    }
    else
    {
        string s = "";
        if (m >= 2 * n)
        {
            for (i = 0; i < n; i++)
                s += "110";
            m -= 2 * n;
            for (i = 0; i < m; i++)
                s += "1";
        }
        else if (m == n - 1)
        {
            for (i = 0; i < m; i++)
                s += "01";
            s += "0";
        }
        else if (m == n)
        {
            for (i = 0; i < m; i++)
                s += "10";
        }
        else
        {
            while (m > n)
            {
                s += "110";
                n--;
                m -= 2;
            }
            for (i = 0; i < n; i++)
            {
                s += "10";
            }
        }
        cout << s << endl;
    }
    return 0;
}