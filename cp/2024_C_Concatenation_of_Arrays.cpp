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

bool cmp(pair<ll, ll> &p, pair<ll, ll> &q)
{
    if (max(p.first, p.second) == max(q.first, q.second))
        return min(p.first, p.second) < min(q.first, q.second);
    return max(p.first, p.second) < max(q.first, q.second);
}
void uttor()
{
    ll n, i, j;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), cmp);
    for (auto it : a)
        cout << it.first << " " << it.second << " ";
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