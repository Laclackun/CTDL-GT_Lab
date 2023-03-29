#include <stdio.h> 
#include <conio.h>
#include <math.h>

long GiaiThua (int n)
{
	if(n==0)
		return 0;
	return (GiaiThua(n-1)*n);	
}

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
 	printf("Xin Hay Nhap N = ");
 	scanf("%d", &n);
 	S = TongS(x,n);
 	printf("\nS = %.3f", S);
	getch();
	return 0; 
}
