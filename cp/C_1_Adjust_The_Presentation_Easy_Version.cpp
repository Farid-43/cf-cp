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
    ll n, m, k, i, j = 0;
    cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < m; i++)
        cin >> b[i];
    set<ll> s;
    for (i = 0; i < m; i++)
    {
        if (s.find(b[i]) != s.end())
        {
            continue;
        }
        if (b[i] == a[j])
        {
            s.insert(a[j]);
            j++;
        }
        else
        {
            cout << "TIDAK" << endl;
            return;
        }
    }
    cout << "YA" << endl;
    return;
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