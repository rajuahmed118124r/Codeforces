#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,c;
    cin>>n>>c;
    list<long long> li;

    for(int i =1; i<=n; i++)
    {
        int in;
        cin>> in;
        li.push_back(i+in);
    }
    li.sort();
    int ans=0;

    while(!li.empty() && c>=1)
    {
        if((c-li.front())<0)
        {
            break;
        }
        c= c- li.front();
        li.pop_front();
        ans++;
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
