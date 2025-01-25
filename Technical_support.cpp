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
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            if(c=='Q')
            {
                st.push(c);
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
        }
        if(st.empty())
        {
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
    return 0;
}
