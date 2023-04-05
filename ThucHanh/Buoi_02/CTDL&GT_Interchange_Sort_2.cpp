// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort

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

void SapXepDoiChoTrucTiep(int a[], int n) 
{ 
    int i,j;
	for(i = 0; i < n-1; i++)
		for(j = i+1; j < n; j++)
			if(a[i] > a[j])
				DoiCho(a[i],a[j]);
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
    SapXepDoiChoTrucTiep(a,n);
    printf("\nMang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
    printf(" %d ",a[i]);
}
