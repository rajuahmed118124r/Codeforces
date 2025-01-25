                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           //============================

/*
 Problem name : C. Advantage
 Problem link : https://codeforces.com/problemset/problem/1760/C
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
    int n, sub,x;
    cin>>n;
    vector<int> v(n),v1,v2;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    v1 = v;
    sort(v1.begin(), v1.end());

    for(int i=0; i<n; i++)
    {
        if(v[i]==v1[n-1])
        {
            sub = v[i] - v1[n-2];
        }
        else{
            sub = v[i] - v1[n-1];
        }
        v2.pb(sub);
    }

    for(int i=0; i<v2.size(); i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<"\n";
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
                                                                //ALHAMDULILLAH
