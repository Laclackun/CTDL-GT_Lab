#include <stdio.h>
#include <conio.h>

int DoiCho (int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

int SXChonChoTT (int a[], int n)
{
	int nn;
	for (int i = 0; i < n - 1; i++)
	{
		nn = i;
		for (int j = i + 1; j < n; j++)
			if (a[nn] > a[j])
				nn = j;
				DoiCho (a[nn], a[i]);
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
