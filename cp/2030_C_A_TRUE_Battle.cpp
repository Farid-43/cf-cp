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
    ll one = 0;
    for (i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one++;
    }
    if (s[0] == '1' || s[n - 1] == '1')
    {
        cout << "YES" << endl;
        return;
    }
    for (i = 1; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i - 1] == '1')
        {
            cout << "YES" << endl;
            return;
        }
        else if (s[i] == '1' && s[i + 1] == '1')
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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