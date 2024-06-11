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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int l = m + 1, r = -1, mx = 0;
        string a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            a[i] += ' ';
        }

        for (int i = 0; i < n; ++i)
        {
            string s = a[i];
            int f = 0, c = 0;
            for (int j = 0; j <= m; ++j)
            {
                if (s[j] == '#')
                {
                    c++;
                    if (f == 0)
                    {
                        f = 1;
                        l = min(l, j);
                    }
                }
                else if (f == 1)
                {
                    r = max(r, j - 1);
                    f = 0;
                }
            }
            mx = max(c, mx);
        }

        int ans = -1;
        for (int i = 0; i < n; ++i)
        {
            int c = 0;
            string s = a[i];
            for (int j = 0; j <= m; ++j)
            {
                if (s[j] == '#')
                {
                    c++;
                    if (c == mx)
                    {
                        ans = i;
                        break;
                    }
                }
            }
        }

        cout << ans + 1 << " " << (l + r + 2) / 2 << endl;
    }
    return 0;
}
