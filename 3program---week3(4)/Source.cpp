#include<stdio.h>
int main()
{
	int N;
	scanf_s("%d", &N);
	int i;
	int a[100] = {};
	int b = 0;
	for (i = 0;i <= N - 1;i++)
	{
		scanf_s("%d", &a[i]);



	}
	int A;
	scanf_s("%d", &A);
	for (i = 0;i <= N - 1;i++)
	{
		b++;
		if (A == a[i])
		{
			printf("%d ", b);
			
		}
		
			
		
	}
	







	return 0;
}