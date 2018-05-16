#include <iostream>

int main()
{
	const int n=10;
	double sum=0;
	int p[10];
	for(int i=0; i<n; ++i)
	{
		std::cin>>p[i];
		sum+=p[i];
	}
	double mij_tvabanakan = sum/n;
	std::cout<<"Mijin tvabanakan@ = "<<mij_tvabanakan<<std::endl;
	return 0;
}
