//inheritance
#include<iostream>
using namespace std;
//base class
class grandfather{
    public:
    void land(){
    cout<<"pass to father"<<endl;}
    void  car(){
    cout <<"pass to father"<<endl;}
  
   };
   //derived class
   class father: public grandfather{
       public:
       void land(){
       cout<<"pass to son" <<endl;}
       void car(){
       cout<<"pass to son"<<endl;}
   };
   int main(){
      //create object of the inheritence
      grandfather father1;
      //calling members of the base class
      father1.land();
      father1.car();
      //calling members of the derived class
      father1.land();
      father1.car();
     return 0;  
	
}