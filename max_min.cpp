#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    int max = (num1>num2)?num1:num2;
    cout<<"Max number is: "<<max<<endl;
    int min= (num1<num2)?num1:num2;
    cout<<"Minimum number is: "<<min<<endl;
    getch();
}
