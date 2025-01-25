                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name : A. Beautiful Year
Problem link : https://codeforces.com/problemset/problem/271/A
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
    bool t = false;
    string s;
    while(1)
    {
        n++;
        s = to_string(n);
        set<char>st;
        for(int i=0; i<4; i++)
        {
            st.insert(s[i]);
        }
        if(st.size()==4)
        {
            break;
        }
        else{
            n = stoi(s);
        }
    }
    cout<<s<<endl;
}


int main()
{
    Raju;

    solve();

return 0;
}


                                                                     ///ALHAMDULILLAH
