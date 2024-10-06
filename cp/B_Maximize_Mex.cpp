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
    ll n, x, i, j;
    cin >> n >> x;
    vector<ll> a(n);
    map<ll, ll> mp;
    ll ans = 0, v;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (i = 0;; i++)
    {
        if (mp[i] > 1)
        {
            v = mp[i] - 1;
            mp[i] -= v;
            mp[i + x] += v;
        }
        else if (mp[i] == 0)
        {
            cout << i << endl;
            return;
        }
    }
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