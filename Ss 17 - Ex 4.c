#include <stdio.h>
#include <string.h>

int main()
{
	char n1[15] = "An";
	char n2[15] = "Dolly";
	char n3[15] = "Baaa";
	int i;
	
	i = strcmp(n1, n2);
	printf("%s so sanh voi %s duoc ket qua la: %d\n", n1, n2, i);
	i = strcmp(n1, n2);
	printf("%s so sanh voi %s duoc ket qua la: %d\n", n2, n3, i);
	i = strcmp(n1, n2);
	printf("%s so sanh voi %s duoc ket qua la: %d", n3, n1, i);
}

