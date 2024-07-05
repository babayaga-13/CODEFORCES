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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = a[0], ans = a[0], m = min(0, a[0]);
        for (int i = 1; i < n; i++)
        {
            if (abs(a[i - 1] % 2) == abs(a[i] % 2))
            {
                sum = 0;
                m = 0;
            }
            sum += a[i];
            ans = max(ans, sum - m);
            m = min(m, sum);
        }
        cout << ans << endl;
    }
    return 0;
}
