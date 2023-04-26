#include <stdio.h> 
#include <conio.h>
#include <math.h>
#define Max 50

long TongGT (int n)
{
	if(n==0)
		return 1;
	return (TongGT(n-1) * n);	
}
  
int main() 
{ 
 	int n, T;
 	do
	{
	printf("Xin Hay Nhap So N = ");
	scanf("%d", &n);
	} while (n<0 && printf("N Phai Lon Hon 0!"));
 	T = TongGT(n);
 	printf("\nT = 1 x ... x %d = %d", n, T);
	getch();
	return 0; 
}
