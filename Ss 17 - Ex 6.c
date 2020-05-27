#include <stdio.h>
#include <string.h>

int main()
{
	char ks1[20] = "HAHA", ks2[20] = "HIHI";
	printf("Ten cu cua ksan la: %s\n", ks1);
	strcpy(ks1, ks2);
	printf("Ten ksan sau khi copy la: %s", ks1);
}


