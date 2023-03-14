#include <stdio.h>
#include <conio.h>
#include <math.h>
#define Max 50

void NhapMang (float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\na[%d] = ", i);
		scanf("%f", &a[i]);
		if (a[i] == 0)
			break;
	}
}

void XuatMang(float a[], int n)
{
    for(int i = 0; i <= n - 1; i++)
        printf("%f \n" ,a[i]);
}

void DoiCho(float &a, float &b)
{
	float x = a;
	a = b;
	b = x;
}

void SapXepChen(float a[], int n) 
{ 
    int i,j,nn;
	for(i = 0; i < n-1; i++)
	{
		nn = i;
		for (j = i+1; j < n; j++)
		if (a[j] < a[nn])
		nn = j;
 		DoiCho(a[nn], a[i]);
    }
} 
int main()
{
    float a[Max];
	int n;
	do
	{
	printf("Xin Hay Nhap So Phan Tu Trong Mang = ");
	scanf("%d", &n);
	} while (n>Max && printf("So Phan Tu Qua Muc."));
    NhapMang(a, n);
    SapXepChen (a, n);
    printf("\nMang Sau Khi Sap Xep La:\n");
 	XuatMang(a, n);
}
