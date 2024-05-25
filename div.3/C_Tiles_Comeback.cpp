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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (a[0] == a[n - 1])
        {
            int c = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[0] == a[i])
                    c++;
            }
            if (c >= k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            int f = 0, l = 0;
            int x = 0, y = n - 1;
            for (int i = 0; i < n; i++)
            {
                if (a[0] == a[i])
                {
                    f++;
                    if (f == k)
                    {
                        x = i;
                        break;
                    }
                }
            }
            for (int i = n - 1; i >= 0; i--)
            {
                if (a[n - 1] == a[i])
                {
                    l++;
                    if (l == k)
                    {
                        y = i;
                        break;
                    }
                }
            }
            if (f == k && l == k && x < y)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}