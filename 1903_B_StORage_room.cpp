                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : https://codeforces.com/contest/1903/problem/B
Problem link : B. StORage room
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
    int arr[n+10][n+10];
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    if(n==1)
    {
        yes;
        cout<<7<<endl;
        return;
    }

    for(int i=0; i<n; i++)
    {
        ll sum =0;
        bool f = 0;
        for(int j=0; j<n; j++)
        {
            if(j!=i)
            {
                if(!f)
                {
                    f = 1;
                    sum = arr[i][j];
                }
                else{
                    sum&= arr[i][j];
                }
            }
        }
        v[i]=sum;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                ll p=(v[i]|v[j]);
                if(p!=arr[i][j])
                {
                    no;
                    return;
                }
            }
        }
    }
    
    yes;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
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