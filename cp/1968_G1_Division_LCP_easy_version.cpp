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

vector<ll> pre_fun(string s)
{
    ll n = s.size(), i, j;
    vector<ll> p(n, 0);
    for (i = 1; i < n; i++)
    {
        j = p[i - 1];

        while (j > 0 && s[i] != s[j])
            j = p[j - 1];

        if (s[i] == s[j])
            j++;
        p[i] = j;
    }
    return p;
}

ll kmp(string target, string source)
{
    vector<ll> pre = pre_fun(target);
    ll count = 0, i = 0, j = 0;
    if (target.size() == 0)
        return 1e9;
    vector<ll> pos;
    while (i < source.size())
    {
        if (target[j] == source[i])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
                j = pre[j - 1];
            else
                i++;
        }

        if (j == target.size())
        {
            if (pos.empty() || i - j >= pos.back())
            {
                count++;
                pos.push_back(i);
            }
            j = pre[j - 1];
        }
    }
    return count;
}

void uttor()
{
    ll n, l, r, i, j, k;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    ll lo = 0, hi = n, mid, val = 0;
    while (hi - lo > 1)
    {
        mid = (hi + lo) / 2;
        string tmp = s.substr(0, mid);
        val = kmp(tmp, s);
        if (val >= r)
            lo = mid;
        else
            hi = mid - 1;
    }
    string tmp = s.substr(0, hi);
    if (kmp(tmp, s) >= r)
        lo = hi;
    cout << lo << endl;
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