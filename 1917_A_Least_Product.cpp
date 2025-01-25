                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Least Product
Problem link : https://codeforces.com/contest/1917/problem/A
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
    vector<int>v(n);
    int minus=0, plus=0, zero=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]>0)
        {
            plus++;
        }
        else if(v[i]<0)
        {
            minus++;
        }
        else{
            zero++;
        }
    }

    if(minus%2==1 || zero>=1)
    {
        cout<<0<<endl;
    }
    else{
        if(minus==0 && plus>0)
        {
            cout<<1<<endl<<1<<" "<<0<<endl;
        }
        else{
            cout<<1<<endl<<1<<" "<<0<<endl;
        }
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