                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Sasha and the Drawing
Problem link : https://codeforces.com/contest/1929/problem/B
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
    ll n, k;
    cin>>n>>k;
    if((4*n-2)==k)
    {
        cout<<2*n<<endl;
    }
    else{
        if(k%2==0)
        {
            cout<<k/2<<endl;
        }
        else{
            cout<<k/2 + 1<<endl;
        }
    }
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