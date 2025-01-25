                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Deja Vu
Problem link : https://codeforces.com/contest/1891/problem/B
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
    int n,q;
    cin>>n>>q;
    vector<int>v(n),a; 
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    } 
    for(int i=0; i<q; i++)
    {
        int temp; cin>>temp;
        if(a.empty() || a.back()>temp)
        a.push_back(temp);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a.size(); j++)
        {
            if(v[i]%(1<<a[j]) == 0)
            {
                v[i]|=1<<(a[j]-1);
            }
            
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


                                                                     ///ALHAMDULILLAH
