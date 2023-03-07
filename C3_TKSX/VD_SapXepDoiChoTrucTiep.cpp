#include <stdio.h>
#include <conio.h>

void DoiCho(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void SapXepDoiChoTrucTiep(int a[], int n) 
{ 
    int i,j;
	for(i = 0; i < n-1; i++)
		for(j = i+1; j < n; j++)
			if(a[i] > a[j])
				DoiCho(a[i],a[j]);
} 
int main()
{
    int a[] = {9, 2, 15, 30, 5, 21, 16, 20, 3, 10};
    int n = sizeof (a)/sizeof(a[0]);
    SapXepDoiChoTrucTiep(a,n);
    printf("\nMang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
        printf(" %d ",a[i]);
}
