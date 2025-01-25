                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/* 
Problem name : A. Sum
Problem link : https://codeforces.com/problemset/problem/1742/A
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
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    vector<int>v;
    v.pb(a);
    v.pb(b);
    v.pb(c);

    sort(v.begin(), v.end());
    sum = v[0]+v[1];
    //cout<<sum<<" "<<v[2]<<endl;
    if(sum==v[2])
    {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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