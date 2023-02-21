//Write a program to search a  number in an array...

#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter values : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter Value "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"Entered values are : "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<"\t";
	}
	int no;
	cout<<"\nEnter a number to search : "<<endl;
	cin>>no;
	int count=0;
	for(int i=0;i<5;i++)
	{
		if(no==arr[i])
		count++;
	}
	cout<<"Number occurs "<<count<<" times in list.";

	return 0;
}