#include <iostream>
#include <stdio.h>
using namespace std;

unsigned long long int n_to_m(int n, int m)
{
	int i;
	unsigned long long int ret_val = 1;
	
	if (n == m)	return 1;

	for (i = n; i > m; i--)
	{
		ret_val =  ret_val * i;
	}

	return ret_val;
}

unsigned long long int m_fact(int m)
{
	int i;
	unsigned long long int ret_val = 1;

	if (m == 1)	return 1;
	
	for (i = m; i > 0; i--)
	{
		ret_val = ret_val * i;
	}

	return ret_val;
}


int main()
{
	int i;
	int num;
	int n, m;

	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{	
		scanf("%d %d", &m, &n);	//nCm

		if (n - m > m)
		{
			printf("%lld\n", n_to_m(n, n - m) / m_fact(m));
		}

		else
		{
			printf("%lld\n", n_to_m(n, m) / m_fact(n - m));

		}

	}
		
	return 0;
}