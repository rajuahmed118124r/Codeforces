                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Colorful Stamp
Problem link : https://codeforces.com/contest/1669/problem/D
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
    cin >> n;

    string s;
    cin >> s;

    int w = count(s.begin(),s.end(),'W');

    if(w == n){
    cout<<"YES\n";return;
    }

for(int i = 0;i < n;)
{
    if(s[i] == 'R' || s[i] == 'B')
    {
        int r = 0, b = 0;
        while(1 < n && (s[i] == 'R' || s[i] == 'B'))
        {
            if(s[i] == 'R') r++;
            else b++;
            i++;
        }

        if(r == 0 || b == 0){
            cout<<"NO\n";return;
        }
    }
    else{
        i++;
    }
}

cout<<"YES\n";
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