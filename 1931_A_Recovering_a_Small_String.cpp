                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Recovering a Small String
Problem link : https://codeforces.com/contest/1931/problem/A
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
    int n,x;
    cin>>n;
    string s="";
    int a,b,c;
    for(char i='a'; i<='z'; i++)
    {
        for(char j='a'; j<='z'; j++)
        {
            for(char k = 'a'; k<='z'; k++)
            {
                s+=i;
                s+=j;
                s+=k;
                a = i -'a' + 1;
                b = j -'a'+1;
                c = k -'a' + 1;
                if(a+b+c==n)
                {
                    cout<<s<<endl;
                    return;
                }
                s = "";
            }
        }
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