                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Black Square
Problem link : https://codeforces.com/contest/431/problem/A
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
    vector<int>v(4);
    for(int i=0; i<4; i++)
    {
        cin>>v[i];
    }
    string s;
    cin>>s;
    int ans =0;
    for(auto x:s)
    {
        if(x=='1')
        {
            ans+=v[0];
        }
        else if(x=='2')
        {
            ans+=v[1];
        }
        else if(x=='3')
        {
            ans+=v[2];
        }
        else {
            ans+=v[3];
        }
    }
    cout<<ans<<endl;
    
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH