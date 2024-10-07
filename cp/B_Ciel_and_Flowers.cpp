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
    ll a, b, c, i, j;
    cin >> a >> b >> c;
    ll ans = 0;
    ans += (a / 3 + b / 3 + c / 3);
    ll aa = a % 3, bb = b % 3, cc = c % 3;
    if (aa && bb && cc)
    {
        ans += min(aa, min(bb, cc));
    }
    else if (aa == 0 || bb == 0 || cc == 0)
    {
        if (a != 0 && b != 0 && c != 0)
        {
            aa = aa + bb + cc;
            if (aa > 3)
                ans++;
        }
    }
    cout << ans << endl;

    return 0;
}