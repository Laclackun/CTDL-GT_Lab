#include <stdio.h> 
#include <conio.h>
#include <math.h>

long TongS (int x, int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return x;
	else
		return ((1 + x/n)*TongS(x, n-1) - (x/n)*TongS(x, n-2));
}
  
int main() 
{ 
 	int n, x, S;
	printf("Xin Hay Nhap X = ");
 	scanf("%d", &n);
 	printf("Xin Hay Nhap N = ");
 	scanf("%d", &n);
 	S = TongS(x,n);
 	printf("\nS = %d", S);
	getch();
	return 0; 
}
