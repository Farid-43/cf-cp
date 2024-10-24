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
    ll f = LLONG_MAX, s = LLONG_MAX, c = 0;
    for (i = 0; i < n; i++)
    {
        if (f > s)
            swap(f, s);
        if (a[i] <= f)
            f = a[i];
        else if (a[i] <= s)
            s = a[i];
        else
        {
            f = a[i];
            c++;
        }
    }
    cout << c << endl;
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