
//DSA LAB - 13
#include<iostream>
using namespace std;
int main()
{
	int i,arr[20],num,first,last,middle;
	cout<<"enter roll number:";
	for(i=0;i<20;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n enter roll number to be search:";
	cin>>num;
	first=0;
	last=19;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(arr[middle]<num)
			first=middle+1;
		else if(arr[middle]==num)
		{
			cout<<"the number  "<<num<<"  found at position"<<middle+1;
			break;
		}
		else
			last=middle-1;
			middle=(first+last)/2;
		}
		if(first>last)
		cout<<"\n the number  "<<num<<"  is not found in given array";
		cout<<endl;
		return 0;
}
