#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define MOD 1000000007
#define pi 3.14159265358979323846
typedef long long ll;
typedef unsigned long long ull;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
void solve()
{
    ll n, i, j;
    cin >> n;
    ll l[n], r[n];
    for (i = 0; i < n; i++)
        cin >> l[i] >> r[i];
    ll lo = 0, hi = 1e9, lind = 1, rind, k;
    while (hi > lo)
    {
        k = (hi + lo) / 2;
        lind = 0, rind = k;
        ll flag = 0;
        for (i = 0; i < n; i++)
        {
            if (rind < l[i] || lind > r[i])
            {
                flag = 1;
                break;
            }
            lind = max(lind, l[i]);
            rind = min(rind, r[i]);
            lind = max(0LL, lind - k);
            rind = rind + k;
        }
        if (flag == 0)
        {
            hi = k;
        }
        else
        {
            lo = k + 1;
        }
    }
    cout << lo << endl;
}
int main()
{
    FAST;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}