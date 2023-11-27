#include<iostream>
using namespace std;

int main()
{
	int i;
	int j;
	int num;
	int temp;
	int arr[30];
	char ulang;
	
	ulang:
	
	cout<<"Enter the number of element : ";
	cin>>num;
	cout<<"Enter the elements :";
	
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
	for(i=1;i<=num-1;i++)
	{
		temp=arr[i];
		j=i-1;
		while((temp<arr[j]&&(j>=0)))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		
		arr[j+1]=temp;
	}
	
	cout<<"\nSorted elements : ";
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
	cout << "Apakah anda ingin mengulangi [y/n]?";
    cin >> ulang;  
  	if(ulang == 'Y' || ulang == 'y') {
  	system("cls");
  	goto ulang;
  }
}
