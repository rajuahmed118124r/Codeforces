                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : B. Patchouli's Magical Talisman
Problem link : https://codeforces.com/contest/1688/problem/B
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
    int even=0, odd=0, mn = 50;
    for(int i=0; i<n; i++)
    {
        if((v[i]&1))odd++;
        else{
            even++;
            int x = v[i];
            int count=0;
            while(x%2==0)
            {
                x/=2;
                count++;
            }
            mn = min(mn, count);
        }
    }
    if(odd!=0)cout<<even<<endl;
    else cout<<mn+(even-1)<<endl;

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
