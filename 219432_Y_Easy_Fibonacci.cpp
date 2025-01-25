                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : Y. Easy Fibonacci
Problem link : https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
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
    int fibo[n+5];
    fibo[1]=0;
    fibo[2]=1;
    for(int i=1; i<=n; i++)
    {
        if(i==1 || i==2)
        {
            cout<<fibo[i]<<" ";
        }
        else{
            fibo[i]=(fibo[i-1]+fibo[i-2]);
            cout<<fibo[i]<<" ";
        }
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH