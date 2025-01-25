                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Almost Prime
Problem link : https://codeforces.com/problemset/problem/26/A
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()

int is_prime(int n)
{
    int count=0;
    if(n<=1)
    {
        return 0;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n/=i;
            }
            count++;
        }
    }
    if(n>1)count++;

    return count;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=2; i<=n; i++)
    {
        if(is_prime(i)==2)
        {
            v.pb(i);
        }
    }
    cout<<v.size()<<endl;
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH