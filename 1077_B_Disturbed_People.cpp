                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Disturbed People
Problem link : https://codeforces.com/problemset/problem/1077/B
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
    int count =0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==0 && v[i-1]==1 && v[i+1]==1 && i-1>=0 && i+1<n)
        {
            count++;
            v[i+1]=0;
        }
    }
    cout<<count<<endl;

}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH