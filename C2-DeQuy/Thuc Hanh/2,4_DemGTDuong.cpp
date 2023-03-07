#include <stdio.h> 
#include <conio.h>
#include <math.h>
#define Max 50
  
void NhapMang (float a[], int n)
{
	do
	{
	printf("Xin Hay Nhap So Phan Tu Trong Mang = ");
	scanf("%d", &n);
	} while (n>Max && printf("So Phan Tu Qua Muc."));
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = ", i);
		scanf("%f", &a[i]);
	}
}

int DemGTDuong (float a[], int n)
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
 	int n, dem;
 	float a[Max];
 	NhapMang(a,n);
 	dem = DemGTDuong(a,n);
 	printf("\nMang nay co tong cong %d so duong.", dem);
    getch();
	return 0; 
}
