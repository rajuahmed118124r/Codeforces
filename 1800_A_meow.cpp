#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int a;
        cin>>a;

        cin>>s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);


        s.erase(unique(s.begin(),s.end()),s.end());
        if(s=="MEOW")
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

    return 0;
}
