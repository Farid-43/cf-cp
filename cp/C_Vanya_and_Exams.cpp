#include "bits/stdc++.h"
using namespace std;
const int MOD = 1e9 + 7;
const double PI = acos(-1);
typedef long long ll;
typedef unsigned long long ull;
#define FAST                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
void uttor()
{
    ll n, m, k, i, j, grade, essay;
    cin >> n >> m >> k;
    multimap<ll, ll> mp;
    ll a, b, diff;
    ll sum = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        sum += a;
        diff = abs(a - m);
        mp.insert({b, diff});
    }
    ll need = k * n - sum;
    // double avg = double(sum) / n;
    if (need > 0)
    {
        ll count = 0;

        for (auto it : mp)
        {
            grade = it.first;
            essay = it.second;
            if (essay > need)
            {
                count += (need * grade);
                break;
            }
            else
            {
                count += (grade * essay);
                need -= essay;
            }
        }
        cout << count << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
int main()
{
    FAST;
    // int T;		cin >> T;	while(T--)
    uttor();
    return 0;
}