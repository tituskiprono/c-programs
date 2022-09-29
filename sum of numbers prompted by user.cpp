//program to prompt user to enter starting point and ending point then sum them
#include<iostream>
using namespace std;
int main(){
	int i,x,y,sum=0;
	//prompting user to enter starting point
			cout<<"enter the starting point "<<endl;
			cin>>x;
//prompting user to enter ending point
			cout<<"enter the ending point"<<endl;
			cin>>y;
			for(i=x;i<=y;i++){
				cout<<i<<endl;
				sum +=i;
//summing the numbers
	}
	cout<<"The sum of "<<x<<"and"<<y<<"is"<<sum;
	return 0;
}