#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c;
    cin>>n>>c;
    unordered_map<int,int>mp;
    for(int i=1; i<=n; i++)
    {
        int p;
        cin>>p;
        mp[p]++;
    }
    int ans= 0;

    for(auto it: mp)
    {
        ans= ans + min(it.second, c);
    }
    cout<<ans<<"\n";

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
