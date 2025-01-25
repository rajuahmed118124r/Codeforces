#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ch;
        int count=0;
        cin>>ch;
        for(int i=0;ch[i];i++){
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')count++;
        }
        if(count>2){
            cout<< "Happy"<<endl;
        }
        else{
            cout<<"Sad"<<endl;
        }
        cout<<count<<endl;
    }
}
