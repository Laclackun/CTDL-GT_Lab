#include <stdio.h>
#include <conio.h>

void DoiCho(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

int VachNgan (int a[], int nho, int lon)
{
    int x = a[lon];
    int left = nho;
    int right = lon - 1;
    while(true){
        while(left <= right && a[left] < x) left++;
        while(right >= left && a[right] > x) right--;
        if (left >= right) break;
        DoiCho(a[left], a[right]);
        left++;
        right--;
    }
    DoiCho(a[left], a[lon]);
    return left;
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
	int a[] = {9, 2, 15, 30, 5, 21, 16, 20, 3, 10};
    int n = sizeof (a)/sizeof(a[0]);
    SapXepNhanh(a,0, n-1);
    printf("Mang Sau Khi Sap Xep La:\n"); 
    for(int i=0; i<n; i++)
        printf(" %d ",a[i]);
    getch();
	return 0;
}
