#include <stdio.h>
#include <conio.h>

int DoiCho (int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

int SXDoiChoTT (int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				DoiCho (a[i],a[j]);
}

int main ()
{
	int a[] = { 1, 23, 4, 14, 56, 1	};
	int n = sizeof(a) / sizeof(a[0]);
	SXDoiChoTT(a, n);
    printf("\nMang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
        printf(" %d ",a[i]);
    getch();
	return 0;
}
