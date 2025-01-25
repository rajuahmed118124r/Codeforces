#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y;
        float t1,t2;
        t1=(float)(a/x);
         t2=(float)(b/y);
        cin>>a>>b>>x>>y;
       if(t1<t2){
           cout<<"Chef"<<endl;
       }
        else if(t1>t2){
           cout<< "Chefina"<<endl;
       }
       else{
           cout<<"Both"<<endl;
       }
    }
}
