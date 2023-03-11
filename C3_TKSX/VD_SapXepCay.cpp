#include <stdio.h>
#include <conio.h>

void DoiCho(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void heapify(int a[], int n, int i)
{
    int max = i;
    int l = i*2 +1; 
    int r = l+1;
    if(l<n && a[l] > a[max]) 
        max = l; 
    if(r<n && a[r] > a[max])
        max = r;
    if(max != i)
	{
        DoiCho(a[i], a[max]);
        heapify(a ,n , max);
    }
    
}

void SapXepCay(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--) {
      DoiCho(a[0], a[i]);
      heapify(a, i, 0);
    }
}


int main()
{
	int a[] = {9, 2, 15, 30, 5, 21, 16, 20, 3, 10};
    int n = sizeof (a)/sizeof(a[0]);
    SapXepCay(a, n);
    printf("Mang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
        printf(" %d ",a[i]);
    getch();
	return 0;
}
