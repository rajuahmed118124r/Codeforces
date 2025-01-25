                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Arrival of the General
Problem link : https://codeforces.com/problemset/problem/144/A
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
    int mn = *min_element(v.begin(), v.end());
    int mx= *max_element(v.begin(), v.end());
    int mni , mxi ;

    for(int i=0; i<n; i++)
    {
        if(v[i]==mn)
        {
            mni = i;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]==mx)
        {
            mxi=i;
            break;
        }
    }
    //cout<<mni<<" "<<mxi<<endl;
    if(mxi>mni)
    {
        mni++;
    }
    int ans = n+mxi-mni-1;
    
    cout<<ans<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH