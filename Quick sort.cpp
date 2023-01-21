#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int parttion(int Arr[],int e,int s)
{
	int piot=Arr[s];
	int i=e-1;
	for(int j=e;j<s;j++)
	{
		if(Arr[j]<piot)
		{
			i++;
			swap(&Arr[i],&Arr[j]);
		}
	}
	swap(&Arr[i+1],&Arr[s]);
	return(i+1);
}

void QuickSort(int Arr[],int e,int s )
{
	if(e<s)
	{
		int p=parttion(Arr,e,s);
	    QuickSort(Arr,e,p-1);
	    QuickSort(Arr,p+1,s);
	}
}
int main()
{
	int Arr[]={33,22,12,21,44,55,21};
	int n=7;
	QuickSort(Arr,0,n);
	cout<<"Sorted array is"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<Arr[i]<<endl;
	}
}
