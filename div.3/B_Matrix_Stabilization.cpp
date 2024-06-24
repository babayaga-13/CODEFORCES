#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
int main()
{
    int bn, pn;

    cout << endl
         << "Enter bloc no : ";
    cin >> bn;
    int block[bn];
    for (int i = 0; i < bn; i++)
    {
        cout << "Enter memory for block " << i + 1 << " : ";
        cin >> block[i];
    }
    int alloc[bn];
    for (int i = 0; i < bn; i++)
    {
        alloc[i] = -1;
    }
    cout << endl
         << "Enter processes no : ";
    cin >> pn;
    int mp[pn];
    for (int i = 0; i < pn; i++)
    {
        cout << "Enter memory for process " << i + 1 << " : ";
        cin >> mp[i];
    }
    cout << endl
         << "PROCESS\tMEMORY REQUIRED\tALLOCATEDtInternal Fragmentation\n";
    for (int i = 0; i < pn; i++)
    {
        cout << endl
             << i + 1 << "\t\t" << mp[i] << "\t\t";
        for (int j = 0; j < bn; j++)
        {
            if (alloc[j] == -1)
            {
                if (mp[i] <= block[j])
                {
                    alloc[j] = 0;
                    cout << "\t\t Allocated" << "\t" << block[j] - mp[i] << endl;
                    break;
                }
                else
                {
                    if (j == bn - 1)
                    {
                        cout << "\t\t Unallocated" << endl;
                    }
                }
            }
        }
    }

    return 0;
}