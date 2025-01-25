#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int count;
    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        char ch= s[i];
        if(ch=='(')st.push(ch);
        else if(ch==')' && st.empty()==false && st.top()=='(')
        {
            st.pop();
            count++;
        }
        else{
            st.push(ch);
        }
    }
    cout<<2*count<<"\n";
    return 0;
}