#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define ln cout << endl
#define all(v) v.begin(), v.end()
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
        int n, r, b;
        cin >> n >> r >> b;
        int x = r / (b + 1);
        int y = r % (b + 1);
        b++;
        string s;
        for (int i = 1; i <= b; i++)
        {
            for (int i = 0; i < x; i++)
            {
                s += 'R';
            }
            if (y)
            {
                s += 'R';
                y--;
            }
            if (b != i)
            {
                s += 'B';
            }
        }
        cout << s << endl;
    }
    return 0;
}
