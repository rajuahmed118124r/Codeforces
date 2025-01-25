                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. The New Year: Meeting Friends
Problem link : https://codeforces.com/problemset/problem/723/A
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
    vector<int>v(3);
    for(int i=0; i<3; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int dist = v[2]-v[0];
    cout<<dist<<endl;
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH