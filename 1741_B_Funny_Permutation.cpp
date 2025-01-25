                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Funny Permutation
Problem link : https://codeforces.com/problemset/problem/1741/B
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
    vector<int>v;
    if(n==3)
    {
        cout<<-1<<endl;
    }
    else if(n==5)
    {
        cout<<"5 4 1 2 3"<<endl;
    }
    else{
        for(int i=n; i>0; i--)
        {
            v.pb(i);
        }
        if(n%2==1)
        {
            swap(v[n/2],v[n/2 +1]);
        }
        for(auto i:v)
        {
            cout<<i<<" ";
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