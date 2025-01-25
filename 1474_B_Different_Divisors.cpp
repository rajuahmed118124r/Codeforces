                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Different Divisors
Problem link : https://codeforces.com/contest/1474/problem/B
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

bool is_prime(int n)
{
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    cin>>n;
    ll p=0, r=0;
    for(int i=n+1;;i++)
    {
        if(is_prime(i))
        {
            p=i;
            break;
        }
    }
    ll q =p;
    for(int i=q+n; ; i++)
    {
        if(is_prime(i))
        {
            r = i;
            break;
        }
    }
    cout<<min((1ll *q*r),(1ll *q*q*q))<<endl;

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