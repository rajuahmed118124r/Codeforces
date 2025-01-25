                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Taxes
Problem link : https://codeforces.com/problemset/problem/735/D
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

bool prime(int n)
{
    if(n<=1)
    {
        return false;
    }
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
    if(prime(n))
    {
        cout<<1<<endl;
        return;
    }
    if(n&1)
    {
        if(prime(n-2))
        {
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }
    else{
        cout<<2<<endl;
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH