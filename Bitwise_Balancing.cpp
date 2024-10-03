#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
const double PI = acos(-1);
typedef long long ll;
typedef unsigned long long ull;
#define FAST                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)

// a comment
int main()
{
    FAST;
    ll T;
    map<tuple<ll, ll, ll>, ll> mp;
    mp[{0, 0, 0}] = 0;
    mp[{0, 0, 1}] = 1;
    mp[{0, 1, 0}] = 0;
    mp[{0, 1, 1}] = -1;
    mp[{1, 0, 0}] = -1;
    mp[{1, 0, 1}] = 0;
    mp[{1, 1, 0}] = 1;
    mp[{1, 1, 1}] = 0;
    cin >> T;
    while (T--)
    {
        ll a = 0, b, c, d, x, y, z, i, k;
        cin >> b >> c >> d;
        for (i = 60; i >= 0; i--)
        {
            x = (((1LL << i) & b) != 0);
            y = (((1LL << i) & c) != 0);
            z = (((1LL << i) & d) != 0);
            k = mp[{x, y, z}];
            if (k == -1)
            {
                a = -1;
                break;
            }
            else
                a += k * (1LL << i);
        }
        cout << a << endl;
    }
    return 0;
}