#include <stdio.h> 
#include <conio.h>
#include <math.h>
#define Max 50

void NhapMang (double a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = ", i);
		scanf("%lf", &a[i]);
	}
}

double DemGTDuong (double a[], int n)
{
	if(n == 0)
		return 0;
	if(a[n-1] > 0)
		return (DemGTDuong(a, n-1) + 1);	
	else
		return DemGTDuong(a, n-1);
}
  
int main() 
{ 
 	int n;
	double T, a[Max];
 	do
	{
	printf("Xin Hay Nhap So Phan Tu Trong Mang = ");
	scanf("%d", &n);
	} while (n>Max && printf("So Phan Tu Khong Hop Le!"));
 	NhapMang(a,n);
 	T = DemGTDuong(a,n);
 	printf("\nT = %d", T);
	getch();
	return 0; 
}
