// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chen-truc-tiep-insertion-sort

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

void SapXepChen(int a[], int n)
{
	int vt, i;
	int x;
	for(i = 1; i < n; i++)
	{
		x = a[i]; vt = i - 1;
		while((vt >= 0)&&(a[vt] > x))
		{  
			a[vt + 1] = a[vt];
			vt--;
		}
		a[vt + 1] = x;
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
    
    SapXepChen(a,n);
    printf("\nMang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
    printf(" %d ",a[i]);
}