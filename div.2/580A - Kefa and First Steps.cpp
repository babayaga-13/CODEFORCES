#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=1,c=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            c++;
            m=max(m,c);
        }
        else
        {

                c=1;}
        }

    cout<<m;
}
