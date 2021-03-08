#include <iostream>
using namespace std;
int main ()
{

int Dbz=0;
int j=0;
int arry[9]={125,0,695,3,-256,-5,214,44,55};
 for(int i=1; i<9; i++)
   {
 	Dbz=arry[i]; 
 	j=i-1;
while(j>=0 && arry[j]>Dbz)
 	  {
 	  	arry[j+1]=arry[j];
 	  	j--;
	   }
	   arry[j+1]=Dbz;
   
 }
for(int i=0; i<9; i++)
	{
		cout<<arry[i]<<"  ";
	}	
}
