                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Multiply by 2, divide by 6
Problem link : https://codeforces.com/problemset/problem/1374/B
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
    int n;
    cin>>n;
    int x=n;
    int cnt =0;
    while(x!=1)
    {
        if(x%6==0)
        {
            x/=6;
        }
        else{
            x*=2;
            if(x%6!=0)
            {
                cout<<-1<<endl;
                return;
            }
        }
        cnt++;
    }
    cout<<cnt<<endl;
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