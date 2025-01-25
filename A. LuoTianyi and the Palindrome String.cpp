doesn't match all case for the problem

/*
#include<bits/stdc++.h>
using namespace std;


int is_palindrome(string s)
{
    int len = s.size(), count=0;
    if(len<=2)
    {
        return -1;
    }
    for(int i=0; i<len/2; i++)
    {
        if(s[i]!=s[len-1-i])
        {
            return -1;
        }
        count++;
    }
    if((s[len/2]==s[len/2 +1] || s[len/2]==s[len/2 -1]) && len%2!=0)
    {
        return -1;
    }
    else{
        return count*2;
    }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
          string s;
          cin>>s;
          cout<<is_palindrome(s)<<"\n";
    }
    return 0;
}
*/
