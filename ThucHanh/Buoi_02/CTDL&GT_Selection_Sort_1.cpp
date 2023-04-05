// Nguon: https://gochocit.com/ky-thuat-lap-trinh/thuat-toan-sap-xep-chon-truc-tiep-selection-sort

void Swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void Selection_Sort(int a[], int n) 
{ 
    int min;
	for(int i = 0; i < n - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[min])
				min = j;
 		Swap(a[nn], a[i]);
    }
} 