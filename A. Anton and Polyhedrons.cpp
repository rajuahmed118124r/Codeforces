                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Anton and Polyhedrons
Problem link : https://codeforces.com/problemset/problem/785/A
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
    ll n, ans=0;
    cin>>n;
    vector<string>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]=="Tetrahedron")
        {
            ans+=4;
        }
        if(v[i]=="Cube")
        {
            ans+=6;
        }
        if(v[i]=="Octahedron")
        {
            ans+=8;
        }
        if(v[i]=="Dodecahedron")
        {
            ans+=12;
        }
        if(v[i]=="Icosahedron")
        {
            ans+=20;
        }
    }
    cout<<ans<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH