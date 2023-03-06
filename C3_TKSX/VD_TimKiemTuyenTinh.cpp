#include <stdio.h> 
#include <conio.h>
  
int TimKiemTuyenTinh(int a[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (a[i] == x) 
           return i; 
    return -1; 
} 
  
int main() 
{ 
    int a[] = { 2, 3, 5, 9, 10, 11, 15, 20, 21, 30 }; 
    int x = 15; 
    int n = sizeof(a); 
    int vt = TimKiemTuyenTinh(a, n, x); 
    if (vt == -1)
	printf("Gia Tri Nay Khong Ton Tai Trong Mang"); 
    else
	printf("Gia Tri Nay Xuat Hien O Vi Tri %d", vt); 
    getch();
    return 0;
}
