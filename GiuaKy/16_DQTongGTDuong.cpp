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

long TongGTDuong (int a[], int n)
{
	if(n==0)
		return 0;
	if (a[n-1] > 0)
		return (TongGTDuong(a, n-1) + a[n-1]);	
	else
		return (TongGTDuong(a, n-1));
}
  
int main() 
{ 
 	int n, T, a[Max];
 	do
	{
	printf("Xin Hay Nhap So Phan Tu Trong Mang = ");
	scanf("%d", &n);
	} while (n>Max && printf("So Phan Tu Khong Hop Le!"));
 	NhapMang(a,n);
 	T = TongGTDuong(a,n);
 	printf("\nT = %d", T);
	getch();
	return 0; 
}
