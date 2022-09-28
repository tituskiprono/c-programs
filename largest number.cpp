#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter num1"<<endl;
    cin>>num1;
    cout<<"enter num2"<<endl;
    cin>>num2;
    cout<<"enter num3"<<endl;
    cin>>num3;
  if((num1>=num2)&&(num1>=num3) )
  {
          cout<<num1 << " is greater"<<endl;
  }
  else if((num2>=num1)&&(num2 >=num3))
  {
      cout<<num2<<" is greater"<<endl;
      
  }
  
   else if((num3 >= num1)&&(num3 >=num2))
   
    {cout<<num3<<" is greater"<<endl;
    }
    return 0;
      }