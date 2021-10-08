#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define pob pop_back
#define mod 1000000007
#define endl "\n"
void run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    // if(if_sorted(vec.begin(),vec.end()))
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    vector<pair<ll,ll>> arr;
    for(ll i=0;i<n-1;i++)
    {
        ll mn_pos=i;
        for(ll j=i+1;j<n;j++)
        {
            if(vec[j]<vec[mn_pos])
            {
                mn_pos=j;
            }
        }
        if(mn_pos>i)
        {
            arr.push_back({i,mn_pos});
            ll a=vec[mn_pos];
            for(ll p=mn_pos;p>i;p--)
            {
                vec[p]=vec[p-1];
            }
            vec[i]=a;
        }
    }
    cout<<arr.size()<<endl;
    for(auto &i : arr)
    {
        cout<<i.first+1<<" "<<i.second+1<<" "<<i.second-i.first<<endl;
    }
}
int main()
{
    run();
    ll t = 1;
    cin >> t;
    while (t > 0)
    {
        solve();
        --t;
    }
    return 0;
}