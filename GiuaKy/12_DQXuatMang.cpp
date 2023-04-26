#include <stdio.h> 
#include <conio.h>
#include <math.h>
#define Max 50

void NhapMang (int a[], int n)
{
	if(n > 0)
	{
		NhapMang(a, n-1);
		printf("\na[%d] = ", n-1);
		scanf("%d", &a[n]);
	}
}

void XuatMang (int a[], int n)
{
	 if(n > 0)
	{
        XuatMang(a, n-1);
        printf("%d ", a[n]);
    }
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
 	XuatMang(a,n);
	getch();
	return 0; 
}
