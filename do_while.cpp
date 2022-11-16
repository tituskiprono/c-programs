//promting user to add numbers
#include<iostream>
using namespace std;
int main()
{
int a,b,sum;
sum=0;
cout<<"Enter first number";
 cin>>a;
 cout<<"Enter last number";
 cin>>b;
 while(a<=b)
 
 { 
 cout<<a <<"\n";
 sum+=a;
 a++;
 
 }
cout<<sum;
return 0;
}
