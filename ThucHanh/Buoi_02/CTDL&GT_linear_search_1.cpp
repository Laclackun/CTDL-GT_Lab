// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-tim-kiem-tuyen-tinh-linear-search

int LinearSearch(int a[], int n, int x)
{
	int i = 0; a[n] = x; 
	while(a[i] != x)
		i++;
	if(i == n)
		return -1;
	else
		return i;
}
