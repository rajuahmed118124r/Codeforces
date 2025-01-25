                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name :
Problem link :
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
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    v[0] +=1;
    long long mul =1;
    for(int i=0; i<n; i++)
    {
        mul *=v[i];
    }
    cout<<mul<<endl;
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
