#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s=1;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        a[0]+=1;
        for(int i=0;i<n;i++)
        {
            s*=a[i];
        }
        cout<<s<<endl;
    }
}
