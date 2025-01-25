                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Taxi
Problem link : https://codeforces.com/problemset/problem/158/B
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
    int n;
    cin>>n;
    vector<int>v(n);
    ll taxi=0, one=0, two=0, three=0, x =0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==1)taxi++;
        if(v[i]==2)one++;
        if(v[i]==3)two++;
        if(v[i]==4)three++;
    }
    x = three;
    while(taxi!=0 && two!=0)
    {
        two-=1;
        taxi-=1;
        x+=1;
    }
    if(taxi==0 && two!=0)
    {
        x+=two;
        two=0;
    }
    x+=one/2;
    if(one%2!=0)
    {
        if(taxi<=2)
        {
            x+=1;
            one=0;
            taxi=0;
        }
        else{
            taxi-=2;
            x+=1;
            one=0;
        }
    }
    if(taxi!=0)
    {
        x+=taxi/4;
        if(taxi%4!=0)
        {
            x+=1;
        }
    }
    cout<<x<<endl;
}


int main()
{
    Raju;
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH