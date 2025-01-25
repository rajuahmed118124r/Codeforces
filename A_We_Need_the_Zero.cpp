                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. We Need the Zero
Problem link : https://codeforces.com/contest/1805/problem/A
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
    int x=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        x = x^a;
    }
    if(n%2==0) // it is called even number
    {
        if(x==0)//x can be any number
        {
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<x<<endl;
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