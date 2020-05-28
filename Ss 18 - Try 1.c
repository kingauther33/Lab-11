#include <stdio.h>
#include <string.h>

int main()
{
	char arr[5][50], danh[50], temp[50];
	int i, j;
	printf("Moi ban nhap vao ten cua cac thanh vien trong chua: \n");
	for (i=0; i<5; i++)
	{
		printf("Nhap ten thanh vien thu %d: ", i+1);
		scanf("%s", arr[i]);
		fflush(stdin);
	}
	printf("Nhap chuc danh: ");
	scanf("%s", danh);
	fflush(stdin);

	printf("==========================\n");
	printf("Ten cac thanh vien truoc khi nhap chuc danh la: \n");
	for (i=0; i<5; i++)
		printf("Ten thanh vien thu %d: %s\n", i+1, arr[i]);
		
	printf("\n==========================\n");
	printf("Ten cac thanh vien sau khi chen chuc danh la: \n");	
	strcpy(temp, danh);
	for (i=0; i<5; i++)
	{
		strcat(temp, arr[i]);
		strcpy(arr[i], temp);
		strcpy(temp, danh);
		printf("Ten thanh vien thu %d: %s\n", i+1, arr[i]);
	}
	return 0;
}

