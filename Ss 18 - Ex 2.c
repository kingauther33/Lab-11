#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char names[5][20];
	void upper(char *name);
	printf("Moi ban nhap ten cho 5 sinh vien: \n");
	for (i=0; i<5; i++)
	{
		printf("Ten sinh vien thu %d: ", i+1);
		scanf("%s", names[i]);
	}
	
	printf("Ten sinh vien sau khi duoc in hoa la: \n");
	for (i=0; i<5; i++)
	{
		upper(names[i]);
		printf("Ten sinh vien thu %d: %s\n", i+1, names[i]);
	}
	return 0;
}

void upper(char *name)
{
	int i;
	for (i=0; i<5; i++)
	{
		if ((*(name+i) >= 97) && (*(name+i) <= 122))
			strupr(name);
			// name[i] = name[i] - 32; (dung cach nay thi khong can doi bien name thanh pointer)
	}	
}
