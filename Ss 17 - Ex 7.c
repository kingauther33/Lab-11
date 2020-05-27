#include <stdio.h>
#include <string.h>

int main()
{
	char cty[20] = "Ngon Lua Vang";
	int dai, cout;
	
	dai = strlen(cty);
	for (cout=0; cout<dai; cout++)
		printf("%c *", cty[cout]);
}


