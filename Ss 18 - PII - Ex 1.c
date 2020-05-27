#include <stdio.h>
#include <string.h>

int main()
{
	char arr[5][50];
	char ch;
	int i, j, dem;
	int nhap(char *arr, char *c);
	for (i=0; i<5; i++)
	{
		dem = nhap(arr[i], &ch);
		printf("Co %d ki tu %c trong mang thu %d\n", dem, ch, i+1);
	}
	return 0;
}

int nhap(char *arr, char *c)
{
	static int i = 0;
	int j;
	int cout = 0;
	printf("Moi ban nhap gia tri vao chuoi thu %d: ", i+1);
	scanf("%s", arr);
	fflush(stdin);
	printf("Moi ban nhap ki tu can tim trong chuoi thu %d: ", i+1);
	scanf("%c", c);
	fflush(stdin);
	for (j=0; j<strlen(arr); j++)
	{
		if (*(arr+j) == *c)
			cout++;
	}
	i++;
	return cout;
}

