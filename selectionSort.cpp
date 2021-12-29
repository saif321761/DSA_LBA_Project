#include <iostream>
using namespace std;

int main()
{
	int arr[5]={5,4,3,2,1};
	int min,loc,temp;
	cout<<"----------Selection Sort---------"<<endl;
	
	cout<<"Before Sorting"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<< " ";
	}
	cout<<endl;
	//Logic
	for(int i=0; i<5-1; i++)
	{
	     min = arr[i];// 5
	     loc = i;// index [0]
	     for(int j=i+1; j<5; j++)//j=1
	     {
	     	if(arr[j]<min) // 4<5
	     	{
	     		min=arr[j]; // 4
	     		loc = j;// index [1]
			 
			 }
			 
			 
		 }
		 cout<<" min is "<<min<<" loc is "<<loc<<" is index p value "<<arr[loc];
			 return 0;
		 temp=arr[i]; // temp = 5;
		 arr[i]=arr[loc];// arr[loc] = 
		 arr[loc]=temp;
	}
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<" ";
	}
}
