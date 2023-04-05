// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-nhi-phan-binary-search

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

int TimKiemNhiPhan(int a[],int n,int x)
{
	int left, right, mid; left=0; right=n-1;
	do{
		mid = (left + right) / 2;
		if(a[mid] == x){
			return mid;
		}
		else if(a[mid] < x){
			left = mid + 1;
		}
		else{
			right = mid - 1;
		}
	} while(left <= right);
	return -1;
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
    
	int vt = TimKiemNhiPhan(a, n, x); 
    if (vt == -1)
	printf("Gia Tri Nay Khong Ton Tai Trong Mang"); 
    else
	printf("Gia Tri Nay Xuat Hien O Vi Tri %d", vt); 
    getch();
 	return 0; 
}
