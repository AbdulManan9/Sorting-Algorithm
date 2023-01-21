#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int A[6]={8,6,9,10,4,3};
	for(i=0;i<5;i++)
	{
		for(j=k=i;j<6;j++)
		if(A[k]>A[j])
		{
			swap(A[i],A[j]);
		}
	}
	cout<<"Your selection sort is"<<endl;
	for(i=0;i<6;i++)
	{
		cout<<A[i];
	}
}
