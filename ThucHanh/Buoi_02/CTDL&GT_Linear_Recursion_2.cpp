// Nguon: https://freetuts.net/de-quy-tuyen-tinh-2946.html

#include <iostream>
using namespace std;

Int Factorial(int n)
{
    If(n == 0) return 1;
    return n * Factorial(n-1);
}

int main() 
{
	int n;
	cout<<"Nhap Vao Mot So De Tinh Giai Thua: ";
	cin>>n;
	int kq = Factorial(n);/ 
	cout<<"\nKet Qua Cua \n"<<n<<"! = "<<kq;
}
