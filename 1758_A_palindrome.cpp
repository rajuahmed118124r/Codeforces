#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<s;
        for(int i=s.size()-1;i>=0;i--)
        {
            cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}
