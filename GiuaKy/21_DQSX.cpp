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

void sort(int a[], int n)
{
	if (n == 1)
	return;
	else
	{
		sort(a, n - 1); 
		if (a[n - 1] < a[n - 2])
		{ 
			int temp = a[n - 1]; 
			a[n - 1] = a[n - 2];
			a[n - 2] = temp;
			sort(a, n - 1);
		}
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
 	sort(a,n);
 	for(int i=0; i<n; i++)
        printf(" %d ",a[i]);
 	getch();
	return 0; 
}
