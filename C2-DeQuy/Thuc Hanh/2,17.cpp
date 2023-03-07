#include <stdio.h> 
#include <conio.h>
  
long Mu2 (int n)
{
	if(n==0)
		return 0;
	return (Mu2(n-1) + n*n);	
}
  
int main() 
{ 
 	int n, T;
 	printf("Xin Hay Nhap N = ");
 	scanf("%d", &n);
 	T = Mu2(n);
 	printf("T = %d", T);
    getch();
	return 0; 
}
