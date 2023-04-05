// Nguon: https://freetuts.net/de-quy-nhi-phan-binary-recursion-2953.html

int Fibonacci(int n)
{
	if(n <= 2)
		return 1;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
