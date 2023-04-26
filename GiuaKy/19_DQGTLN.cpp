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

int GTLN(int a[], int n)
{
	if (n == 0)
		return -1;
	if (n == 1)
		return a[0];
	else
	{
		if (a[n - 1] > GTLN(a, n - 1))
			return a[n - 1];
		else
			return GTLN(a, n - 1);
	}
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
 	printf("Gia Tri Lon Nhat Cua Mang: %d\n", GTLN(a,n));
	getch();
	return 0; 
}
