#include <stdio.h>
#include <string.h>

int main()
{
	int i, j;
	char str_arr[5][20], str[20];
	for(i=0; i<5; i++)
	{
		printf("Moi ban nhap gia tri cho chuoi %d: ", i+1);
		scanf("%s", str_arr[i]);
		fflush(stdin);
	}
	for (i=0; i<4; i++)
		for(j=i+1; j<5; j++)
		{
			if (strlen(str_arr[i]) < strlen(str_arr[j]))
			{
				strcpy(str, str_arr[i]);
				strcpy(str_arr[i], str_arr[j]);
				strcpy(str_arr[j], str);
			}
		}
	printf("Chuoi theo thu tu giam cac ki tu la: \n");
	for (i=0; i<5; i++)
		printf("Chuoi %d: %s\n", i+1, str_arr[i]);
	return 0;
}
