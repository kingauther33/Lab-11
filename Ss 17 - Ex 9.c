#include <stdio.h>
#include <string.h>

int main()
{
	char lines[5][30];
	int i1, i2;
	int imax (char lines_arr[][30]);
	for (i1=0; i1<5; i1++)
	{
		printf("Nhap vao chuoi thu %d: ", i1+1);
		gets(lines[i1]);
		fflush(stdin);
	}
	i2 = imax(lines);
	printf("Chuoi dai nhat la: %s", lines[i2]);
}

int imax (char lines_arr[][30])
{
	int i=0, li=0, prev_len, new_len;
	prev_len = strlen(lines_arr[i]);
	for (i++; i<5; i++)
	{
		new_len = strlen(lines_arr[i]);
		if (new_len > prev_len)
			li = i;
		prev_len = new_len;
	}
	return li;
}
