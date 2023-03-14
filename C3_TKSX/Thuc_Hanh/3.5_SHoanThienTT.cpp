#include <stdio.h>
#include <conio.h>
#include <math.h>
#define Max 50

int KTSHoanThien(int a)
{
    int dem = 0;
    for (int i = 1; i < a; i++)
        if (a % i == 0)
            dem += i;
    if (dem == a)
        return 1; 
    return 0;
}

void NhapMang (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = ", i);
		scanf("%d", &a[i]);
		if (a[i] == 0)
			break;
	}
}

void XuatMang(int a[], int n)
{
    for(int i = 0; i <= n - 1; i++)
        printf("%d \n" ,a[i]);
}

void DoiCho(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void SapXepChonChoTT(int a[], int n) 
{ 
    int i,j,nn;
	for(i = 0; i < n-1; i++)
	{
		nn = i;
		if (KTSHoanThien(a[i]) == 1)
			{	
			for (j = i+1; j < n; j++)
			if (KTSHoanThien(a[j]) == 1 && a[j] < a[nn])
			nn = j;
 			DoiCho(a[nn], a[i]);
			}
    }
} 
int main()
{
    int a[Max], n;
	do
	{
	printf("Xin Hay Nhap So Phan Tu Trong Mang = ");
	scanf("%d", &n);
	} while (n>Max && printf("So Phan Tu Qua Muc."));
    NhapMang(a, n);
    SapXepChonChoTT (a, n);
    printf("\nMang Sau Khi Sap Xep La:\n");
 	XuatMang(a, n);
}
