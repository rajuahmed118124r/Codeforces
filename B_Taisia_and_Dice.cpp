
                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Taisia and Dice
Problem link : https://codeforces.com/problemset/problem/1790/B
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
    int n, s,r,sum=0;
    cin>>n>>s>>r;
    int mx = s-r;
    cout<<mx<<" ";
    n--;
    vector<int>v(n,1);
    r = r-n;
    int idx=0;

    for(int i=0; i<r; i++)
    {
        if(v[idx]!=mx)
        {
            v[idx]++;
        }
        else{
            idx++;
            v[idx]++;
        }
    }
    
    for(int i=0; i<n; i++)
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


