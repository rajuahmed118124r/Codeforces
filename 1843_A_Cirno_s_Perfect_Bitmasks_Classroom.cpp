                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Cirno's Perfect Bitmasks Classroom
Problem link : https://codeforces.com/problemset/problem/1688/A
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
    bitset<32>A(n),B(0);
    for(int i=0; i<32; i++)
    {
        if(A[i]==1)
        {
            B[i]=1;
            break;
        }
    }
    
    if((A^B)==0)
    {
        for(int i=0; i<32; i++)
        {
            if(A[i]==0 && B[i]==0)
            {
                B[i]=1;
                break;
            }
        }
    }
    ll ans = B.to_ulong();
    cout<<ans<<endl;
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