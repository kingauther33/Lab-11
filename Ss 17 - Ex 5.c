#include <stdio.h>
#include <string.h>

int main()
{
	char s1[80], s2[80];
	char ch, *pos;
	printf("Hay danh ten thanh pho thu nhat: ");
	gets(s1);
	printf("Hay danh ten thanh pho thu hai: ");
	gets(s2);
	
	printf("Nhap ki tu can tim trong ten thanh pho dau tien: ");
	ch = getchar();
	pos = strchr(s1, ch);
	if (pos!=NULL)
		printf("%c xuat hien o vi tri thu %d trong thanh pho dau tien\n", ch, pos-s1);
	else 
		printf("%c ko xuat hien trong thanh pho dau tien.\n", ch);
		
	printf("Nhap ki tu can tim trong ten thanh pho thu hai: ");
	fflush(stdin);
	ch = getchar();
	pos = strchr(s2, ch);	
	if (pos!=NULL)
		printf("%c xuat hien o vi tri thu %d trong chuoi", ch, pos-s2);
	else 
		printf("%c ko xuat hien trong chuoi.", ch);
}


