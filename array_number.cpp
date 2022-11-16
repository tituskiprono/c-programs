//Accesing members numbers in arraysq

#include <iostream>
using namespace std;
int main()
{
	int a[2][3]={
		               {1,3,4},
		               {2,6,8},
		               };
	//cout<<a[1][0];
	for(int i=0;i<2;i++)
       {
          for (int j=0;j<3;j++)
       	{
         	 cout<<a[i][j]<<"\n.........";
	   	}
	    }
	return 0;
	}