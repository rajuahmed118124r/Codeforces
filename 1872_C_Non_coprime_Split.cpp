                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Non-coprime Split
Problem link : https://codeforces.com/problemset/problem/1872/C
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
    int l,r;
    cin>>l>>r;
    for(int i=max(4,l); i<=r; i++)
    {
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                cout<<j<<" "<<i-j<<endl;
                return;
            }
        }
    }
    cout<<-1<<endl;
}

//another solution
/**
void solve()
{
    ll l,r;
    cin>>l>>r;
    if(l==r)
    {
        for(int i=2; i*i<=l; i++)
        {
            if(l%i==0)
            {
                cout<<i<<" "<<l-i<<endl;
                return;
            }
        }
        cout<<-1<<endl;
    }
    else{
        if(r>3)
        {
            if(r%2==0)
            {
                cout<<2<<" "<<r-2<<endl;
            }
            else{
                cout<<2<<" "<<r-3<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}
*/


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