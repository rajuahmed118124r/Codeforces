#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int zero=0,one=0,flag=0;

    for(int i=0; i<=s.size(); i++)
    {
        if(s[i]=='0')
        {
            zero++;
            one=0;
        }
        else
        {
            one++;
            zero=0;
        }
        if(zero>=7 || one>=7)
        {
            flag=1;
        }
    }

    if(flag==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
