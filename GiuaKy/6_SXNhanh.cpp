#include <stdio.h>
#include <conio.h>

int DoiCho (int &a, int &b)
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

int main ()
{
	int a[] = { 41, 23, 4, 14, 56, 1	};
	int n = sizeof(a) / sizeof(a[0]);
	SXChonChoTT(a, n);
    printf("\nMang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i < n; i++)
        printf(" %d ",a[i]);
    getch();
	return 0;
}
