                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Bachgold Problem
Problem link : https://codeforces.com/problemset/problem/749/A
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool is_prime(int n)
{
    if(n==1)return false;
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
    vector<int>v;
    // for(int i=2; i<=n; i++)
    // {
    //     if(is_prime(i))
    //     {
    //         v.pb(i);
    //     }
    // }
    cout<<n/2<<endl;
    if(n%2==0)
    {
        for(int i=0; i<n/2; i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else{
        for(int i=0; i<n/2 -1; i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<" "<<endl;
    }
    
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH