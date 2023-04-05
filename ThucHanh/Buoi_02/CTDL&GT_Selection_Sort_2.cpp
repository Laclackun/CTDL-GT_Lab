// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chon-truc-tiep-selection-sort

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

void DoiCho(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void SapXepChonChoTrucTiep(int a[], int n) 
{ 
    int nn;
	for(int i = 0; i < n - 1; i++)
	{
		nn = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[nn])
				nn = j;
 		DoiCho(a[nn], a[i]);
    }
} 

int main()
{
    int a[Max], n;
	do
	{
	printf("Xin Hay Nhap So Phan Tu Trong Mang = ");
	scanf("%d", &n);
	} while (n>Max && printf("So Phan Tu Khong Hop Le!"));
    NhapMang(a,n);
    SapXepChonChoTrucTiep(a,n);
    printf("\nMang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
    printf(" %d ",a[i]);
}
