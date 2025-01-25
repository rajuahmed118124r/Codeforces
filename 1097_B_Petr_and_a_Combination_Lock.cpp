                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Petr and a Combination Lock
Problem link : https://codeforces.com/contest/1097/problem/B
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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    bool flag = false;
    for(int i=0; i<(1<<n); i++)
    {
        int sum=0;
        for(int j=0; j<n; j++)
        {
            int mask = (1<<j);
            if((i & mask)==0)
            {
                sum-=v[j];
            }
            else{
                sum+=v[j];
            }
        }
        if(sum%360==0)
        {
            flag = true;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else 
    {
        cout<<"NO\n";
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH