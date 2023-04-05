// Nguon: https://www.thegioididong.com/game-app/quick-sort-la-gi-thuat-toan-sap-xep-nhanh-quick-sort-trong-c-1336679

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

int VachNgan (int a[], int nho, int lon)
{
    int x = a[lon];
    int trai = nho;
    int phai = lon - 1;
    while(true)
	{
        while(trai <= phai && a[trai] < x) trai++;
        while(phai >= trai && a[phai] > x) phai--;
        if (trai >= phai) break;
        DoiCho(a[trai], a[phai]);
        trai++;
        phai--;
    }
    DoiCho(a[trai], a[lon]);
    return trai;
}

void SapXepNhanh(int a[], int nho, int lon)
{
    if (nho < lon)
    {
        int vn = VachNgan(a, nho, lon);
        SapXepNhanh(a, nho, vn - 1);
        SapXepNhanh(a, vn + 1, lon);
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
    
    SapXepNhanh(a,0, n-1);
    printf("Mang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
        printf(" %d ",a[i]);
    getch();
	return 0;
}