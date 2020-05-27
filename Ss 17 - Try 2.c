#include <stdio.h>
#include <string.h>

float TB(int n, float tong);

int main()
{
	int arr[100], i, n, tong = 0;
	float tb;
	printf("Nhap so gia tri ban muon co trong mang: ");
	scanf("%d", &n);
	printf("Nhap gia tri vao mang:\n");
	
	for (i=0; i<n; i++)
	{
		printf("Moi ban nhap gia tri cho o [%d]: ",i);
		scanf("%d", &arr[i]);
		fflush(stdin);
		tong += arr[i];
	}
	tb = TB(n, tong);
	printf("Gia tri trung binh cua ham la: %.2f", tb);
}

float TB(int n, float tong)
{
	float tb;
	tb = tong / n;
	return tb;
}


