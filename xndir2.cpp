#include <iostream>

int* getProducts(int arr[], int n)
{
	int* artadryal=new int[n];
	for(int i=0; i<n; ++i)
	{
		int temp=1;
		for(int j=0; j<n; ++j)
		{
			if(i!=j)
				temp*=arr[j];
			else
				continue;
		}
		artadryal[i]=temp;
	}
	return artadryal;
}

int main()
{
	const int n=5;
	int arr[n]={0};
	for(int i=0; i<n; ++i)
	{
		std::cin>>arr[i];
	}
	int* pointer=getProducts(arr, n);
	for(int i=0; i<n; ++i)
	{
		std::cout<<pointer[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}
