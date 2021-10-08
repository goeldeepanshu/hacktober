#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    if(n==1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        int arr[n];
        int c=0;
        for(int i=k+1;i<=n;i++)
        {
            arr[c++]=i;
        }
        for(int i=1;i<=k-i;i++)
        {
            int m=k-i;
            arr[c++]=m;
        }
        cout<<c<<endl;
        for(int i=0;i<c;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}

