#include <stdio.h>
#include <conio.h>

void DoiCho(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void SapXepChonChoTrucTiep(int a[], int n) 
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
	int a[] = {9, 2, 15, 30, 5, 21, 16, 20, 3, 10};
    int n = sizeof (a)/sizeof(a[0]);
    SapXepChonChoTrucTiep(a,n);
    printf("\nMang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
        printf(" %d ",a[i]);
    getch();
	return 0;
}
