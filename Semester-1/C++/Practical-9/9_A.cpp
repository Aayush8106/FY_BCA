#include<iostream>
using namespace std;
class student
{
 private:
  string name;
  int age;
 public:
  student(string n, int a)
  {
   name=n;
   age=a;
  }
  void display()
  {
   cout<<"Name:"<<name<<endl;
   cout<<"Age :"<<age<<endl;
  }
};
int main()
{
    cout<<endl;
    student s1("John",20);
    s1.display();
    cout<<endl;
    return 0;
}