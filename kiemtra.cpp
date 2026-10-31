#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n;
	printf("nhap n:");
	scanf_s("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		int chu = n % 10;
		if (n % 2 != 0)
		{
			n /= 10;
			return 0;
		}
		return 1;
	}
	if (n==0)
	{
		printf("day la cac so chan!");
	}
	else
	{
		printf("day khong phai la so chan!");
	}
}