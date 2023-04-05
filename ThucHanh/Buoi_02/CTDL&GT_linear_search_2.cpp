// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-tuyen-tinh-linear-search

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

int TimKiemTuyenTinh(int a[], int n, int x)
{
	int i = 0; a[n] = x; 
	while(a[i] != x)
		i++;
	if(i == n)
		return -1;
	else
		return i;
}

int main() 
{ 
    int a[Max], n, x;
	do
	{
	printf("Xin Hay Nhap So Phan Tu Trong Mang = ");
	scanf("%d", &n);
	} while (n>Max && printf("So Phan Tu Khong Hop Le!"));
    NhapMang(a,n);
   	printf("Xin Hay Nhap X = ");
	scanf("%d", &x);

	int vt = TimKiemTuyenTinh(a, n, x); 
    if (vt == -1)
	printf("Gia Tri Nay Khong Ton Tai Trong Mang"); 
    else
	printf("Gia Tri Nay Xuat Hien O Vi Tri %d", vt); 
    getch();
 	return 0; 
}