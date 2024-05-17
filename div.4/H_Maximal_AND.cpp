#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if ((a[j] & (1 << i)) == 0)
                    count++;
            }
            if (count <= k)
            {
                k -= count;
                ans |= (1 << i);
            }
        }
        cout << ans << endl;
    }
}
