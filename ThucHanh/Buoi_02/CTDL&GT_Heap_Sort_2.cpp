// Nguon: https://funix.edu.vn/chia-se-kien-thuc/gioi-thieu-ve-thuat-toan-heap-sort/

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

void Swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void Heapify(int a[], int n, int i)
{
    int max = i;
    int l = i * 2 + 1; 
    int r = l + 1;
    if(l < n && a[l] > a[max]) 
        max = l; 
    if(r < n && a[r] > a[max])
        max = r;
    if(max != i)
	{
        Swap(a[i], a[max]);
        Heapify(a ,n , max);
    }
    
}

void Heap_Sort(int a[], int n) 
{
    for (int i = n / 2 - 1; i >= 0; i--)
    	Heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--)
	{
 		Swap(a[0], a[i]);
 		Heapify(a, i, 0);
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
    Heap_Sort(a,n);
    printf("\nMang Sau Khi Sap Xep La:\n"); 
    for(int i = 0; i < n; i++)
    printf(" %d ",a[i]);
}