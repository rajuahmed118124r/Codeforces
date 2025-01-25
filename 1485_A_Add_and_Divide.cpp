                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Add and Divide
Problem link : https://codeforces.com/contest/1485/problem/A
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
    int a,b;
    cin>>a>>b;
    int ans = 1e9;
    for(int i=0; i<30; i++)
    {
        if(b+i==1)
        {
            continue;
        }
        int res = i;
        int x = a;
        while(x>0)
        {
            x/= b+i;
            res++;
        }
        ans = min(ans, res);
    }
    cout<<ans<<endl;
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