#include<iostream>
using namespace std;
int main()
{
   int x,y,z,t;
   float p;
   cout<<"Enter Marks of Quiz:";
   cin>>x; 
   cout<<"Enter Marks of Mid-Term:";
   cin>>y;
   cout<<"Enter Marks of Final Score:";
   cin>>z;  
   t=x+y+z;
   p=t/300.00*100.00;
   cout<<"Percentage:"<<p<<endl;
   if(p<50)
   {cout<<"Grade F:";}
  else if(p<70)
   {cout<<"Grade C:";}
   else if(p<90)
   {cout<<"Grade B:";}
   else if(p<100)
   {cout<<"Grade A:";}
   else
    {cout<<"Invalid Marks....";}
   return 0;
}