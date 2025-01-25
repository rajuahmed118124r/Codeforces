                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Array Reodering
Problem link : https://codeforces.com/problemset/problem/1535/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()


void solve()
{
    int n;
    cin>>n;
    vector<int>odd, even, v(n);
    ll ans =0, z=1;;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
        {
            even.pb(v[i]);
        }
        else{
            odd.pb(v[i]);
        }
    }
    for(int i=0; i<even.size(); i++)
    {
        ans+=n-z;
        z++;
    }

    int ans1 =0;
    sort(odd.begin(), odd.end());
    for(int i=0; i<odd.size(); i++)
    {
        for(int j=i+1; j<odd.size(); j++)
        {
            if(__gcd(odd[i], odd[j])>1)ans1++;
        }
    }
    cout<<ans+ans1<<endl;
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