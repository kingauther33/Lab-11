#include <stdio.h>
#include <string.h>

int main()
{
	int num[5], i, tong;
	int tong1(int num1[]);
	for (i=0; i<5; i++)
	{
		printf("Nhap so [%d]: ", i);
		scanf("%d", &num[i]);
		fflush(stdin);
	}
	tong = tong1(num);
	printf("Tong cua day la: %d", tong);	
}

int tong1(int num1[])
{
	int i, tong;
	for (i=0, tong = 0; i<5; i++)
		tong += num1[i];
	return tong;
}
