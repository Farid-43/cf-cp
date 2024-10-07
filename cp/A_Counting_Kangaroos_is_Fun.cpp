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
void uttor()
{
    ll n, i, j;
    cin >> n;
    vector<ll> a(n);
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    ll count = 0, pos = n / 2;
    for (i = 0; i < n / 2; i++)
    {
        for (;;)
        {
            if (a[i] * 2 <= a[pos])
            {
                count++;
                pos++;
                break;
            }
            else
                pos++;
            if (pos == n)
                break;
        }
        if (pos == n)
            break;
    }
    ll ans = n - count;
    cout << ans << endl;
}
int main()
{
    FAST;
    // int T;		cin >> T;	while(T--)
    uttor();
    return 0;
}