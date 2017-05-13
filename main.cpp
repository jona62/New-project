#include <iostream>
#include <string>
using namespace std;

int main ()
{
  double a1,a2,s1,s2,d1,d2,m1,m2,sum,multiply,divide,subtract,x;

  do{
  cout<<endl;
  cout<<"Simple Calculator"<<endl;
  cout<<"1.Addition"<<endl;
  cout<<"2.Subtration"<<endl;
  cout<<"3.Division"<<endl;
  cout<<"4.Multiplication"<<endl;
  cout<<"5.Quit"<<endl;
  cout<<"Enter a choice:";
  cin>>x;
  cout<<endl;

  if(x == 1)
  {
    cout<<"Enter Operand 1:";
    cin>>a1;
    cout<<"Enter Operand 2:";
    cin>>a2;
    sum=a1+a2;
    cout<<"Result:"<<sum<<endl;
  }
    else if(x == 2)
  {
    cout<<"Enter Operand 1:";
    cin>>s1;
    cout<<"Enter Operand 2:";
    cin>>s2;
    subtract=s1-s2;
    cout<<"Result:"<<subtract<<endl;
  }
   else if(x == 3)
  {
    cout<<"Enter Operand 1:";
    cin>>d1;
    cout<<"Enter Operand 2:";
    cin>>d2;
    if(d2 == 0)
    {
      cout<<"Error!"<<endl;
      cout<<"Cannot Divide by 0"<<endl;
      continue;
    }
    divide=d1/d2;
    cout<<"Result:"<<divide<<endl;


  }
   else if(x == 4)
  {
    cout<<"Enter Operand 1:";
    cin>>m1;
    cout<<"Enter Operand 2:";
    cin>>m2;
    multiply=m1*m2;
    cout<<"Result:"<<multiply<<endl;
  }
  else if(x == 5)
  {
    cout<<"Terminating Program..."<<endl;
    cout<<"Program Terminated";
  }
  else
  {
    cout<<"Invalid Choice!"<<endl;
  }
}
while (x != 5);
  return 0;

}
