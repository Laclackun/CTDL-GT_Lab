// Nguon: https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html

#include <iostream>
using namespace std;
 
int Fibonacci(int n)
{
	if(n <= 2)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
 
int main()
{
	int kq, n;
	cout<<"Nhap Vi Tri n Muon Tim Trong Dãy Fibonacci: ";
	cin>>n;
	kq = Fibonacci(n);
	cout<<"\nSo Fibonacci O Vi Tri "<<n<<" la: "<<kq;
}
