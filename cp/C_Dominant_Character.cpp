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
    string s;
    cin >> s;
    vector<ll> a;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            a.push_back(i);
    }
    if (a.size() == 0 || a.size() == 1)
    {
        cout << -1 << endl;
        return;
    }
    for (i = 0; i < a.size() - 1; i++)
    {
        if (a[i + 1] - a[i] == 1)
        {
            cout << 2 << endl;
            return;
        }
    }
    for (i = 0; i < a.size() - 1; i++)
    {
        if (a[i + 1] - a[i] == 2)
        {
            cout << 3 << endl;
            return;
        }
    }
    for (i = 0; i < a.size() - 1; i++)
    {
        if (a[i + 1] - a[i] == 3)
        {
            if (s[a[i] + 1] != s[a[i] + 2])
            {
                cout << 4 << endl;
                return;
            }
        }
    }
    for (i = 0; i < a.size() - 1; i++)
    {
        if (a[i + 1] - a[i] == 3)
        {
            if (s[a[i] + 1] != s[a[i] + 2])
            {
                cout << 4 << endl;
                return;
            }
            else
            {
                map<char, ll> mp;
                ll x = a[i];
                for (j = a[i]; j < (x + 7); j++)
                {
                    if (j >= n)
                    {
                        break;
                    }
                    mp[s[j]]++;
                }
                if (mp['a'] > mp['b'] && mp['a'] > mp['c'])
                {
                    cout << 7 << endl;
                    return;
                }
            }
        }
    }
    cout << -1 << endl;
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