#include<iostream>
using namespace std;
int main()
{
	int sp,k,rows;

	
 
 for(int i=rows;i>1;i--)
 {
 	for(sp=0;sp>rows-i;sp++)
 	{
 		cout<<" ";
 	}
 	for(int j=1;k<=2*i-1;j++)
        {
        	cout<<"*";
		}
	for(int k=0;k<i-1;k++)
	{
	cout<<"*";
	}
       
	cout<<endl;
 }
      return 0;
}
