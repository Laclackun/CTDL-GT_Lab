// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-doi-cho-truc-tiep-interchange-sort

void Swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void Interchange_Sort(int a[], int n) 
{ 
    int i,j;
	for(i = 0; i < n-1; i++)
		for(j = i + 1; j < n; j++)
			if(a[i] > a[j])
				Swap(a[i], a[j]);
}
