                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : A. George and Accommodation
Problem link : https://codeforces.com/problemset/problem/467/A
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
    int n,count=0;
    cin>>n;
    vector<pair<int, int>>v;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        v.pb({a,b});
    }

    for(int i=0; i<n; i++)
    {
        if(v[i].second -v[i].first>1)
        {
            count++;
        }
    }
    cout<<count<<endl;

}


int main()
{
    Raju;

    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH
