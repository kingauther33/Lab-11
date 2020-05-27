#include <stdio.h>
#include <string.h>

int main()
{
	char firstname[20];
	char lastname[20];
	
	printf("Nhap ten cua ban: ");
	scanf("%s", firstname);
	printf("Nhap ho cua ban: ");
	scanf("%s", lastname);
	strcat(firstname, lastname);
	printf("Nickname cua ban la: %s", firstname);
	return;
}

