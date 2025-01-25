                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Lost Permutation
Problem link : https://codeforces.com/problemset/problem/1759/B
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
    int n,s;
    cin>>n>>s;
    vector<int>v(n),v1(10005);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        v1[v[i]]=1;
    }
    
    sort(v.begin(), v.end());
    int mx = *max_element(v.begin(), v.end());
    int sum=0;
    for(int i=1; i<=mx; i++)
    {
        if(!v1[i])
        {
            sum+=i;
        }
    }
    if(sum==s)
    {
        cout<<"YES\n";
    }
    else if(sum>s)
    {
        cout<<"NO\n";
    }
    else{
        for(int i=mx+1; ; i++)
        {
            sum+=i;
            if(sum<s)continue;
            else if(sum==s)
            {
                cout<<"YES\n";
                break;
            }
            else{
                cout<<"NO\n";
                break;
            }
        }
    }

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
return 0;
}


                                                                     ///ALHAMDULILLAH