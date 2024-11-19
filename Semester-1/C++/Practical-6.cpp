#include<iostream>
using namespace std;
class onedigitcounter
{
 public:
 int counter=0;
 void setvalue()
 {
 cout<<"Enter a Value:";
 cin>>counter;
 cout<<endl;
 
  if(counter<0 || counter>9)
  {
   cout<<"invalid value...";
   counter=0;
  }
 }
 void displayvalue()
 {
  cout<<counter<<endl;
 }
 void increment()
 {
  if(counter<9)
  {
   counter++;
  } 
  else
  { 
   cout<<"counter is at Maximum value."<<endl;
  }
 }
 void decrement()
 {
  if(counter>0)
   {
    counter--;
   }
   else
   {
    cout<<"Counter is at Minimum value."<<endl;
   }
 }
};
int main()
{
 onedigitcounter c;
 c.setvalue();
 cout<<"Counter   Value:";
 c.displayvalue();
 c.increment();
 cout<<"Increment Value:";
 c.displayvalue();
 c.decrement();
 cout<<"Decrement Value:";
 c.displayvalue();
 cout<<endl;
 return 0;
}