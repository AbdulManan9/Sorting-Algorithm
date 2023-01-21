#include<iostream>
using namespace std;
void merge(int arr[],int s,int mid,int e)
{
	int n1=mid-s+1;
	int n2=e-mid;
	int a[n1];
	int b[n2];
	for(int i=0;i<n1;i++)
	{
		a[i]=arr[s+i];
	}
	for(int i=0;i<n2;i++)
	{
		b[i]=arr[mid+1+i];
	}
	int i=0;
	int j=0;
	int k=s;
	while(i<n1&&j<n2)
	{
		if(a[i]<b[j])
		{
			arr[k]=a[i];
			k++; i++;
		}
		else
		{
			arr[k]=b[j];
			k++;j++;
		}
	}
	while(i<n1)
	{
		arr[k]=a[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		arr[k]=b[j];
		k++;
		j++;
	}
}
void mergesort(int arr[],int s,int e)
{
	if(s<e)
	{
		int mid=(s+e)/2;
		mergesort(arr,s,mid);
		mergesort(arr,mid+1,e);
		merge(arr,s,mid,e);
	}
}
int main()
{
	int arr[5]={5,4,3,2,1};
	mergesort(arr,0,5);
	cout<<"Sorted Array is"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
		
	}
}
