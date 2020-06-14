#include<iostream>
using namespace std;
int main()
{
	int arr[5]={};
	int *p;
	int i,j;
	//int n;
	//cout<<"enter number of elements";
	//cin>>n;
	for(i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	p=arr;
	j=0;
	cout<<"output \n ";
	while(j<5)
	{
		cout<<*p<<endl;
		p++;
		j++;
	}
	return 0;
}
