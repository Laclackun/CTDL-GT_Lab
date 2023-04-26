#include <stdio.h>
#include <conio.h>

void Swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void Heapify(int a[], int n, int i)
{
    int max = i;
    int l = i * 2 + 1; 
    int r = l + 1;
    if(l < n && a[l] > a[max]) 
        max = l; 
    if(r < n && a[r] > a[max])
        max = r;
    if(max != i)
	{
        Swap(a[i], a[max]);
        Heapify(a ,n , max);
    }
    
}

void Heap_Sort(int a[], int n) 
{
    for (int i = n / 2 - 1; i >= 0; i--)
    	Heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--)
	{
 		Swap(a[0], a[i]);
 		Heapify(a, i, 0);
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
