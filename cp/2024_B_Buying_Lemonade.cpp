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
    ll n, k, i, j;
    cin >> n >> k;
    vector<ll> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll c = 0, x, p = n, z = 0;
    for (i = 0; i < n; i++)
    {
        x = p * (a[i] - z);

        if (x < k)
        {
            k -= x;
            c += x;
            c++;
            p--;
            z += (a[i] - z);
        }
        else
        {
            c += k;
            break;
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