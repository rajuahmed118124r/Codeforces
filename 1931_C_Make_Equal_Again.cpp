///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Make Equal Again
Problem link : https://codeforces.com/contest/1931/problem/C
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
    ll n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll j = n-1,i=0;

    while(i<n-1)
    {
        if(v[i]==v[i+1])
        {
            i++;
        }
        else break;
    }

    if(i==n-1)
    {
        cout<<0<<endl;
        return;
    }

    while(j>0)
    {
        if(v[j]==v[j-1])
        {
            j--;
        }
        else break;
    }

    if(v[0]==v[n-1])
    {
        ll v = (i+1)+(n-j);
        cout<<n-v<<endl;
    }

    else{
        ll v = max(i+1,n-j);
        cout<<n-v<<endl;
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