#include <stdio.h>
#include <conio.h>

int DoiCho (int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void SXChen(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

int main ()
{
	int a[] = { 41, 23, 4, 14, 56, 1	};
	int n = sizeof(a) / sizeof(a[0]);
	SXChen(a, n);
    printf("\nMang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i < n; i++)
        printf(" %d ",a[i]);
    getch();
	return 0;
}
