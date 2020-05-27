#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100], s2[100], temp[100];
	char *pos, *pos1;
	int i;
	printf("Moi ban nhap vao chuoi thu nhat: ");
	gets(s1);
	printf("Moi ban nhap vao chuoi thu hai: ");
	gets(s2);
	strcpy(temp, s2);
	pos = strchr(s2, s1[0]);
	for (i=0; i<strlen(s2); i++)
	{
		if (strlen(pos) > strlen(s1))
			pos = strchr(pos+1, s1[0]);
	}
	printf("Chuoi pos la: %s\n", pos);
	if ((strlen(pos) == strlen(s1)) && (strcmp(pos, s1) == 0))
		printf("Chuoi thu nhat ket thuc o cuoi chuoi thu hai");
	else
		printf("Chuoi thu nhat khong ket thuc o cuoi chuoi thu hai");	
}
