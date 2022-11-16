//program to add numbers
#include <iostream>
using namespace std;
//creation of class
class addition{
    public:
     int a=60;
     int b=70;
     int c=150;
     int product(){
     return(a*b*c);
     }
     int sum(){
     return(a+b+c);
     }
};
int main(){
    //object naming
    addition addition1;
    int product,sum;
    product=addition1.product();
    sum=addition1.sum();
    cout<<"the product is "<<product<<endl;
    cout<<"the sum is "<<sum<<endl;
    return 0;
}