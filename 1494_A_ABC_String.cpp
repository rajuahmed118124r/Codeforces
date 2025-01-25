                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. ABC String
Problem link : https://codeforces.com/problemset/problem/1494/A
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
    cin >> s;
    int sz = s.size();

    int a = 0, b = 0, c = 0;

    for (int i = 0; i < sz; i++) 
    {
        if (s[i] == 'A') a++;
        else if (s[i] == 'B') b++;
        else c++;
    }

    int cnt =0;
    if(a==b+c)
    {
        if(s[0]=='A')
        {
            for(int i=0; i<sz; i++)
            {
                if(s[i]=='B' || s[i]=='C')
                {
                    cnt--;
                }
                else{
                    cnt++;
                }
                if(cnt<0)
                {
                    break;
                }
            }
            if(cnt==0)
            {
                yes;
                return;
            }
            else 
            {
                no;
                return;
            }
        }
        else{
            for(int i=0; i<sz; i++)
            {
                if(s[i]=='A')
                {
                    cnt--;
                }
                else{
                    cnt++;
                }
                if(cnt<0)
                {
                    break;
                }
            }
            if(cnt==0)
            {
                yes;
                return;
            }
            else 
            {
                no;
                return;
            }
        }
    }
    else if(b==a+c)
    {
        if(s[0]=='B')
        {
            for(int i=0; i<sz; i++)
            {
                if(s[i]=='A' || s[i]=='C')
                {
                    cnt--;
                }
                else{
                    cnt++;
                }
                if(cnt<0)break;
            }
            if(cnt==0)
            {
                yes;
                return;
            }
            else 
            {
                no;
                return;
            }
        }
        else{
            for(int i=0; i<sz; i++)
            {
                if(s[i]=='A' || s[i]=='C')
                {
                    cnt++;
                }
                else{
                    cnt--;
                }
                if(cnt<0)break;
            }
            if(cnt==0)
            {
                yes;
                return;
            }
            else 
            {
                no;
                return;
            }
        }
    }
    if(c==a+b)
    {
        if(s[0]=='C')
        {
            for(int i=0; i<sz; i++)
            {
                if(s[i]=='C')cnt++;
                else cnt--;
                if(cnt<0)break;
            }
            if(cnt==0)
            {
                yes;
                return;
            }
            else 
            {
                no;
                return;
            }
        }
        else{
            for(int i=0; i<sz; i++)
            {
                if(s[i]=='C')cnt--;
                else cnt++;
                if(cnt<0)break;
            }
            if(cnt==0)
            {
                yes;
                return;
            }
            else 
            {
                no;
                return;
            }
        }
    }
    else{
        no;
        return;
    }
}

int main() {
    Raju;
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}



                                                                     ///ALHAMDULILLAH