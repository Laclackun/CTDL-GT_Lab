#include <stdio.h>
#include <conio.h>

void DoiCho(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void SapXepChen(int a[], int n) 
{ 
    int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j = j-1;
       }
       a[j+1] = key;
   }
} 
int main()
{
    int a[] = {9, 2, 15, 30, 5, 21, 16, 20, 3, 10};
    int n = sizeof (a)/sizeof(a[0]);
    SapXepChen(a,n);
    printf("Mang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
    printf(" %d ",a[i]);
    getch();
    return 0;
}
