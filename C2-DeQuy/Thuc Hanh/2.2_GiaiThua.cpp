#include <stdio.h> 
#include <conio.h>
  
long GiaiThua (int n)
{
	if(n==1)
		return 1;
	return (n*GiaiThua(n-1));	
}
  
int main() 
{ 
 	int n, T;
 	printf("Xin Hay Nhap N = ");
 	scanf("%d", &n);
 	T = GiaiThua(n);
 	printf("T = %d", T);
    getch();
	return 0; 
}
