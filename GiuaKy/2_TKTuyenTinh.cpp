#include <stdio.h>
#include <conio.h>

int TKTuyenTinh (int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return -1;
}

int main ()
{
	int a[] = { 2, 3, 4, 10, 40	};
	int x = 10;
	int n = sizeof(a) / sizeof(a[0]);
	int vt = TKTuyenTinh (a, n, x);
	if (vt == -1)
		printf("Gia Tri Nay Khong Ton Tai Trong Mang"); 
    else
	printf("Gia Tri Nay Xuat Hien O Vi Tri %d", vt); 
    getch();
	return 0;
}
