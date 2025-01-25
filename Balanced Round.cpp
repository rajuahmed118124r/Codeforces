                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           //============================

/*
 Problem name : D. Balanced Round
 Problem link : https://codeforces.com/contest/1850/problem/D
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
    int n , k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int mx = 1;
        int temp = 1;
        sort(all(v));
        for(int i=1; i<n; i++)
        {
            if(v[i]-v[i-1]<=k)
              {
                temp++;
              }
            else{
                mx = max(mx , temp);
                temp = 1;
            }
        }
        mx = max(mx , temp);
        cout<<n-mx<<"\n";

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
