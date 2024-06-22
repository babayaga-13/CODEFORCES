#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        ll ans = 0;

        ll k = max(0LL, min({n, b, (2 * (b - a) + 1) / 2}));
        ll s = k * (2 * b - k + 1) / 2;
        ll r = n - k;
        ll p = s + r * a;
        ans = max(ans, p);
        ans = max(ans, n * a);
        cout << ans << endl;
    }
    return 0;
}
