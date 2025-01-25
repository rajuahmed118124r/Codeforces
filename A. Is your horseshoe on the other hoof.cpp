                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Is your horseshoe on the other hoof?
Problem link : https://codeforces.com/problemset/problem/228/A
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
    set<int>s;
    vector<int>v(4);
    for(int i=0; i<4; i++)
    {
        cin>>v[i];
        s.insert(v[i]);
    }
    cout<<4-s.size()<<endl;
}

int main()
{
    Raju;
    solve();
    
    return 0;
}



                                                                     ///ALHAMDULILLAH