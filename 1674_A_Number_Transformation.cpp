                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Number Transformation
Problem link : https://codeforces.com/contest/1674/problem/A
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
    ll a, b, x;
    cin>>a>>b;
    if(a>b)
    {
        cout<<0<<" "<<0<<endl;
    }
    else if(a==b)
    {
        cout<<1<<" "<<1<<endl;
    }
    else {
        bool t = false;
        for(int i=1; i<=b; i++)
        {
            if(b%(a*i)==0)
            {
                cout<<i<<" "<<(b/(a*i))<<endl;
                t = true;
                return;
            }
        }
        if(t==false)
        {
            cout<<0<<" "<<0<<endl;
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