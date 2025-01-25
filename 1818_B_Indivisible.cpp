                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Indivisible
Problem link : https://codeforces.com/problemset/problem/1818/B
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
    int n, sum=0;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl;
        return;
    }
    else if(n%2==1)
    {
        cout<<-1<<endl;
    }
    else 
    {
        for(int i=2; i<=n; i+=2)
        {
            cout<<i<<" "<<i-1<<" ";
        }
        cout<<endl;
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