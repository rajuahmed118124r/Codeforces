                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. XOR = Average
Problem link : https://codeforces.com/problemset/problem/1758/B
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
    int n;
    cin>>n;
    if(n%2==1)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<1<<" ";
        }
        cout<<endl;
    }
    else{
        
        for(int i=1; i<=n-2; i++)
        {
            cout<<2<<" ";
        }
        cout<<"1 3"<<endl;
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