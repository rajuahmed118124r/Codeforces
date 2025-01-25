                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : A. Kefa and First Steps
Problem link : https://codeforces.com/contest/580/problem/A
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
    int n,count=0;
    cin>>n;
    vector<int>v(n), v1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n-1; i++)
    {
        if(v[i]<=v[i+1])
        {
            count++;
            v1.pb(count);
        }
        else{
            count=0;
        }
    }
    if(!v1.empty())
    {
        cout<<*max_element(v1.begin(), v1.end()) + 1<<endl;
    }
    else{
        cout<<1<<endl;
    }

}


int main()
{
    Raju;

    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH
