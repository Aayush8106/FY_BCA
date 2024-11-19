#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter Three Numbers"<<endl;
    cout<<"Enter 1st Number:";
    cin>>x;
    cout<<"Enter 2nd Number:";
    cin>>y;
    cout<<"Enter 3rd Number:";
    cin>>z;cout<<endl;
    if(x>=y && x>=z)
    {cout<<x<<"is the greatest\n";}
    else if(y>=x && y>=z)
    {cout<<y<<"is the greatest\n";}
    else
    {cout<<z<<"is the greatest\n";}
    return 0;
}