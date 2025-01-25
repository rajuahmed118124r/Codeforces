                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Raising Bacteria
Problem link : https://codeforces.com/problemset/problem/579/A
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
    int n, cnt =0;
    cin>>n;
    while(n>0)
    {
        if(n&1)
        {
            n--;
            cnt++;
        }
        else{
            n>>=1;
        }
    }
    cout<<cnt<<endl;
}


int main()
{
    Raju;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH