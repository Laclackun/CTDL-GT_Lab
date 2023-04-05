// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chen-truc-tiep-insertion-sort

void Insertion_Sort(int a[], int n)
{
	int pos, i;
	int x;
	for(i = 1; i < n; i++)
	{
		x = a[i]; pos = i - 1;
		while((pos >= 0)&&(a[pos] > x))
		{  
			a[pos + 1] = a[pos];
			pos--;
		}
		a[pos + 1] = x;
	}
}