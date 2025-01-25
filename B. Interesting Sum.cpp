                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           //============================

/*
 Problem name : B. Interesting Sum
 Problem link : https://codeforces.com/problemset/problem/1720/B
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
    sort(v.begin(), v.end());

    int first = v[0] + v[1];
    int last = v[n-1]+v[n-2];
    cout<<last - first<<"\n";
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
