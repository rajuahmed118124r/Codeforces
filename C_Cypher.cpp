                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Cypher
Problem link : https://codeforces.com/problemset/problem/1703/C
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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        string s;
        cin>>s;
        for(auto c:s)
        {
            if(c=='D')
            {
                v[i]++;
                if(v[i]==10)
                {
                    v[i]=0;
                }
            }
            else{
                v[i]--;
                if(v[i]==-1)
                {
                    v[i]=9;
                }
            }
        }
    }
    for(auto x:v)
    {
        cout<<x<<" ";
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