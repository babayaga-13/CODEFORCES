#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ln cout << endl
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
        int n;
        cin >> n;
        ll ans = 0;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ans = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            ans = max(ans + 1, a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
