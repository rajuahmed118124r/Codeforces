                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. YetnotherrokenKeoard
Problem link : https://codeforces.com/contest/1907/problem/B
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
    string s, s1 = "";
    cin >> s;
    int b=0, B=0;
    for (int i = s.size()-1; i>=0; i--)
    {
        char ch = s[i];
        if (ch == 'b')b++;
        else if(ch=='B') B++;
        else if(ch!='b' && ch!='B' && islower(ch) && b>0)
        {
            b--;
            continue;
        }
        else if(ch!='B' && ch!='b' && isupper(ch) && B>0)
        {
            B--;
            continue;
        }
        else{
            s1+=ch;
        }
    }
    reverse(s1.begin(), s1.end());
    cout<<s1<<endl;
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
