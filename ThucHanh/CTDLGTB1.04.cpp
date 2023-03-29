#include <stdio.h> 
#include <conio.h>
#include <math.h>

long Xn(int x, int n) 
{
	if(n == 0) 
		return 1;
	else
		for (int i = 0; i < n ; i++)
			
			return Xn(x,n) + (n - i) * (n - i) *x[i] ;
} 

int main() 
{
 	int x, n;
 	long U;
 	printf("Xin Hay Nhap X = ");
 	scanf("%f", &x);
	do
 	{
 	printf("Xin Hay Nhap n = ");
 	scanf("%d", &n);
 	} while (n<0 && printf("Chi co the nhap n > 0 ma thoi.\n"));
	U = Xn(n);
 	printf("\nX(n) = %d", U);
	getch();
	return 0; 
}
