                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Smilo and Monsters
Problem link : https://codeforces.com/contest/1891/problem/C
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve()
{
    ll n,sum=0,temp=0,ans=0,x=0;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ans=sum;
    for(ll i=0; i<n; i++)
    {
        temp+=v[i];
        sum-=v[i];
        if(temp>sum)
        {
            x=temp-sum;
            x=(x+1)/2;
        }
        ll result=sum+x;
        ans=min(ans,i+1+result);
        x=0;
    }
    cout<<ans<<endl;
}


int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}




                                                                     ///ALHAMDULILLAH