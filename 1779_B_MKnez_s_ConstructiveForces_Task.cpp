                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. MKnez's ConstructiveForces Task
Problem link : https://codeforces.com/problemset/problem/1779/B
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
    if(n%2==0)
    {
        yes;
        for(int i=1; i<=n; i++)
        {
            if(i%2)
            {
                cout<<1<<" ";
            }
            else{
                cout<<-1<<" ";
            }
        }
        cout<<endl;
    }
    else{
        if(n==3)
        {
            no;
            return;
        }
        yes;
        int x = n/2;
        int y= -(x-1);
        for(int i=1; i<=n; i++)
        {
            if(i%2)
            {
                cout<<y<<" ";
            }
            else{
                cout<<x<<" ";
            }
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