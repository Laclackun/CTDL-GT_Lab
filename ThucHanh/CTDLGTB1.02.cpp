#include <stdio.h> 
#include <conio.h>
#include <math.h>

float TongS (float x, int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return x;
	else
		return ((1 + x/n) * TongS(x, n-1) - (x/n) * TongS(x, n-2));
}
  
int main() 
{ 
 	int n;
	float x, S;
	printf("Xin Hay Nhap X = ");
 	scanf("%f", &x);
 	do
 	{
 	printf("Xin Hay Nhap n = ");
 	scanf("%d", &n);
 	} while (n<0 && printf("Chi co the nhap n > 0 ma thoi.\n"));
	S = TongS(x,n);
 	printf("\nS = %.3f", S);
	getch();
	return 0; 
}
