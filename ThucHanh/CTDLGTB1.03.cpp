#include <stdio.h> 
#include <conio.h>
#include <math.h>

long Xn(int);
long Yn(int);


long Xn(int n) 
{
	if(n == 0) 
		return 1;
	else
		return Xn(n - 1) + Yn(n - 1);
} 

long Yn(int n)
{
	if(n == 0)
		return 0;
	else
		return 3 * Xn(n - 1) + 2 * Yn(n - 1);
}

int main() 
{
 	int n;
	long U, V;
 	do
 	{
 	printf("Xin Hay Nhap n = ");
 	scanf("%d", &n);
 	} while (n<0 && printf("Chi co the nhap n > 0 ma thoi.\n"));
	U = Xn(n);
	V = Yn(n);
 	printf("\nX(n) = %d \nY(n) = %d", U, V);
	getch();
	return 0; 
}
