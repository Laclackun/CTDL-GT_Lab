#include <stdio.h> 
#include <conio.h>
  
int TimKiemNhiPhan(int a[], int left, int right, int x) 
{ 
    int middle;
    while(left <= right) {
        middle = (left + right) / 2;

        if (a[middle] == x)
            return middle;

        if (x > a[middle])
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
} 
  
int main() 
{ 
    int a[] = { 2, 3, 5, 9, 10, 11, 15, 20, 21, 30 }; 
    int x = 15;
    int n = sizeof(a);
    int vt = TimKiemNhiPhan(a, 0, n-1, x); 
    if (vt == -1)
		printf("Gia Tri Nay Khong Ton Tai Trong Mang"); 
    else
	printf("Gia Tri Nay Xuat Hien O Vi Tri %d", vt); 
    getch();
	return 0; 
}
