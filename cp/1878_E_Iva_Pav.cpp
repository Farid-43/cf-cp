#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
const double PI = acos(-1);
typedef long long ll;
typedef unsigned long long ull;
#define FAST                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)

void uttor()
{
    int n, i, j, q;
    cin >> n;
    int pre[n + 1][32], a[n];
    memset(pre, 0, sizeof(a));
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        int x = a[i];
        for (j = 0; j < 32; j++)
        {
            pre[i + 1][j] = pre[i][j] + (!(x % 2));
            x /= 2;
        }
    }
    cin >> q;
    int l, k;
    while (q--)
    {
        cin >> l >> k;
        if (a[l - 1] < k)
            cout << -1 << " ";
        else
        {
            int ans = l, lo = l + 1, hi = n;
            while (lo <= hi)
            {
                int m = lo + (hi - lo) / 2, zz = 0;
                for (i = 0; i < 32; i++)
                {
                    if (pre[l - 1][i] == pre[m][i])
                    {
                        zz += (1 << i);
                    }
                }
                if (zz >= k)
                {
                    ans = m;
                    lo = m + 1;
                }
                else
                    hi = m - 1;
            }
            cout << ans << " ";
        }
    }
    cout << endl;
}
int main()
{
    FAST;
    int T;
    cin >> T;
    while (T--)
        uttor();

    return 0;
}