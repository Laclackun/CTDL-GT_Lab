#include <stdio.h> 
#include <conio.h>
#include <math.h>
#define Max 50

void NhapMang (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

int KiemTraToanAm(int a[], int n)
{
	if(n == 0) 
		return 0; 
	if(n == 1) 
	{
		if(a[0] < 0) 
			return 1; 
		return 0;
	} 
	if(a[n - 1] >= 0)
		return 0;
	return KiemTraToanAm(a, n - 1);
}
  
int main() 
{ 
 	int n, a[Max];
 	do
	{
	printf("Xin Hay Nhap So Phan Tu Trong Mang = ");
	scanf("%d", &n);
	} while (n>Max && printf("So Phan Tu Khong Hop Le!"));
 	NhapMang(a,n);
 	printf("Vay Mang Co Toan Am Khong: %d\n", KiemTraToanAm(a,n));
	getch();
	return 0; 
}
