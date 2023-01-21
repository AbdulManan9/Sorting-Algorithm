#include<iostream>
using namespace std;
void fun(int arr[])
{
	cout<<"Total element of array is"<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<arr[i];
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		if(arr[j]>arr[j+1])
		{
			swap(arr[j],arr[j+1]);
		}
	}
	cout<<"Sorted array is"<<endl;
		for(int i=0;i<6;i++)
		{
			cout<<arr[i];
		}
}
int main()
{
	int arr[6]={5,2,6,5,9,8};
	fun(arr);
}
