#include <stdio.h> 
#include <conio.h>
  
long TongSoChan (int n)
{
	if(n==0)
		return 0;
	if (n % 2 == 0)
		return (TongSoChan(n-2) + n);	
	else
		return (TongSoChan(n-3) + n-1);
}
  
int main() 
{ 
 	int n, T;
 	printf("Xin Hay Nhap N = ");
 	scanf("%d", &n);
 	T = TongSoChan(n);
 	printf("T = %d", T);
    getch();
	return 0; 
}
