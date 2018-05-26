#include <iostream>

void Array_Reverse(int* p, int n)
{
	for(int i=0; i<n/2; ++i)
	{
		int temp = p[i];
		p[i] = p[n-1-i];
		p[n-1-i] = temp;
	}
}

int main()
{
	int n=0;
	std::cin>>n;
	int *p = new int [n];
	for(int i=0; i<n; ++i)
	{
		std::cin>>p[i];
	}
	Array_Reverse(p, n);
	for(int i=0; i<n; ++i)
	{
		std::cout<<p[i]<<" ";
	}
	std::cout<<std::endl;
	return 0;
}

