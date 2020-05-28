#include <stdio.h>
#include <string.h>

int main()
{
	int max(int arr[0]) ;
	int arr[5][20];
	int i, j;
	printf("Nhap nhiet do trung binh cho cac thanh pho: \n");
	printf("========================== \n");
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
		printf("Nhiet do nam thu %d cua thanh pho %d la: ", i+1, j+1);
		scanf("%d", &arr[i][j]); 
		}
		if (i<4)
			printf("------------------------------------------\n");
	}
	printf("========================== \n");
	printf("Nhiet do lon nhat va nho nhat qua tung nam la: \n\n");
	for (i=0; i<5; i++)
	{
		printf("Nhiet do lon nhat qua cac nam cua thanh pho %d la: %d\n", i+1, max(arr[i]));
		printf("Nhiet do nho nhat qua cac nam cua thanh pho %d la: %d\n", i+1, min(arr[i]));
		printf("------------------------------------------\n");	
	}
	
}

int max(int arr[])
{
	int i, max;
	max = arr[0];
	for (i=1; i<5; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

int min(int arr[])
{
	int i, min;
	min = arr[0];
	for (i=1; i<5; i++)
		if (arr[i] < min)
			min = arr[i];	
	return min;
}


