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
    map<ll, ll> mp;
    for (i = 0; i < n; i++)
    {
        cin >> j;
        mp[j]++;
    }
    ll ans = 0, c = 0, maxa = 0, val;
    auto itt = mp.begin();
    ll prevf = itt->first;
    deque<ll> d;
    for (auto it : mp)
    {
        ans += it.second;
        d.push_back(it.second);
        c++;
        if (c > 1)
        {
            if (abs(it.first - prevf) > 1)
            {
                ans = it.second;
                c = 1;
                d.clear();
                d.push_back(it.second);
            }
            itt++;
            prevf = itt->first;
        }
        if (c > k)
        {
            c--;
            val = d.front();
            d.pop_front();
            ans -= val;
            maxa = max(ans, maxa);
        }
        maxa = max(ans, maxa);
    }
    cout << maxa << endl;
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