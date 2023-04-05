// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-quick-sort

void Swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void Quick_Sort(int a[], int left, int right)
{
	int i, j, x;
	x = a[(left + right) / 2];
	i = left; 
	j = right;
	do{
		while(a[i] < x) i++;
		while(a[j] > x) j--;
		if(i <= j)
		{
			Swap(a[i], a[j]);
			i++; j--;
		}
	}while(i <= j);
	if(left < j){
		Quick_Sort(a, left, j);
	}
	if(i < right){
		Quick_Sort(a, i, right);
	}
}