                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Swap and Delete
Problem link : https://codeforces.com/contest/1913/problem/B
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
    string s ;
    cin >> s; 
    if(s.size()==1)
    {
        cout<<1<<endl;
        return;
    }
    int c1 =0 , c2 =0,c3=0 ;
    for(int i =0 ; i<s.size() ; i++)
    {
        if(s[i]=='1')
        {
        c1++;
        }
        else {
        c2++;
        }
    }

    int ans=0,ans1=0;

    for (int i = 0; i <s.size(); i++) 
    {
        if (s[i] == '1') 
        {
            if(c2==0)
            {
                ans=s.size()-i;
                break;
            }
            else {
                c2--;
            }
        } 
        else if (s[i] == '0') 
        {
            if(c1==0)
            {
                ans=s.size()-i;
                break;
            }
            else {
                c1--;
            }
        } 
        
    }
    cout << ans << endl;
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