#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<(2*i)<<" ";
    }
    cout<<"\n";
}


int main()
{
    Faster;

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
