#include<bits/stdc++.h>
using namespace std;

#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back

void solve()
{
    ll n, a=1e9, b =1e9, c=1e9, x;
    string s;
    cin>> n;

    for(int i=0; i<n; i++)
    {
        cin>>x>>s;
        if(s=="11") a= min(a,x);
        if(s=="10") b = min(b,x);
        if(s=="01") c = min(c,x);
    }
    if(a!=1e9 || (b!= 1e9 && c!= 1e9))
    {
        cout<<min(a,b+c)<<"\n";
    }
    else {
        cout<<-1<<"\n";
    }

}


int main()
{
    Faster;

    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
