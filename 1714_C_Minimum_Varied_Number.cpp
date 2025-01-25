                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Minimum Varied Number
Problem link :
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
    string s;
    for(int i=9; i>0; i--)
    {
        if(n>=i)
        {
            s+=to_string(i);
            n-=i;
        }
    }
    if(n>0)
    {
        cout<<-1<<endl;
    }
    else{
        reverse(s.begin(), s.end());
        cout<<s<<endl;
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