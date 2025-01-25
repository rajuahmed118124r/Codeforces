                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Chewbaсca and Number
Problem link : https://codeforces.com/contest/514/problem/A
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
    string s;
    cin>>s;
    int dig;
    if(s[0]=='9')
    {
        s[0] ='9'; 
        for(int i=1; i<s.size(); i++)
        {
            dig = 9 -(s[i]-'0');
            if((s[i]-'0')>=dig)
            {
                s[i]=dig +'0';
            } 
        }
    }
    else{
        for(int i=0; i<s.size(); i++)
        {
            dig = 9 -(s[i]-'0');
            if((s[i]-'0')>=dig)
            {
                s[i]=dig +'0';
            } 
        }
    }
    
    cout<<s<<endl;
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