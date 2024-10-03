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
    ll n, i, count = 0;
    cin >> n;

    for (i = 1; count < n; i++)
    {
        cout << n + i << " ";
        count++;
    }
    cout << endl;
}
int main()
{
    FAST;
    // int T;		cin >> T;	while(T--)
    uttor();
    return 0;
}