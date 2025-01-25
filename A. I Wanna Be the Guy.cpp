                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. I Wanna Be the Guy
Problem link : https://codeforces.com/problemset/problem/469/A
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
    int a,b;
    cin>>a;
    vector<int>v(a);
    set<int>s;
    for(int i=0; i<a; i++)
    {
        cin>>v[i];
        s.insert(v[i]);
    }
    cin>>b;
    vector<int>v1(b);
    for(int i=0; i<b; i++)
    {
        cin>>v1[i];
        s.insert(v1[i]);
    }
    if(s.size()==n)
    {
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH