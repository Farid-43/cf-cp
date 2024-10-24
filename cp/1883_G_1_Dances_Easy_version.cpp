#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define MOD 1000000007
#define pi 3.14159265358979323846
typedef long long ll;
typedef unsigned long long ull;
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
void solve()
{
    ll n, m, i, j;
    cin >> n >> m;
    ll a[n + 5], b[n + 5];
    a[n] = 1;
    for (i = 1; i < n; i++)
        cin >> a[i];
    for (i = 1; i <= n; i++)
        cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + n + 1);
    ll ans = 0;
    j = 1;
    for (i = 1; i <= n; i++)
    {
        if (a[j] < b[i])
            j++;
        else
            ans++;
    }
    cout << ans << endl;
}
int main()
{
    FAST;
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}