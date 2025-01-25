                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Not Quite Latin Square
Problem link : https://codeforces.com/contest/1915/problem/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()


void solve()
{
    int a=0, b=0, c=0;
    vector<char>v(9);
    for(int i=0; i<9; i++)
    {
        cin>>v[i];
        if(v[i]=='A')a++;
        else if(v[i]=='B')b++;
        else if(v[i]=='C')c++;
    }
    if(a==2)
    {
        cout<<"A"<<endl;
    }
    else if(b==2)
    {
        cout<<"B"<<endl;
    }
    else{
        cout<<"C"<<endl;
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