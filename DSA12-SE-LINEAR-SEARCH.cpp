#include<iostream>
using namespace std;
int main()
{
	int arr[10],i,num,index;
	cout<<"enter 10 roll number:";
	for(i=0;i<10;i++)
		cin>>arr[i];
	cout<<"\n enter roll number to be searched:";
	cin>>num;
	for(i=0;i<10;i++)
	{
		if(arr[i]==num)
		{
			index=i;
			break;
		}
	}
	cout<<"\n roll number found at index number:"<<index;
	cout<<endl;
	return 0;
}
