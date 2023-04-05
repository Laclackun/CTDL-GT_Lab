// Nguon: https://funix.edu.vn/chia-se-kien-thuc/gioi-thieu-ve-thuat-toan-heap-sort/

void Swap(int &a, int &b)
{
	int x = a;
	a = b;
	b = x;
}

void heapify(int a[], int n, int i)
{
    int max = i;
    int l = i * 2 + 1; 
    int r = l + 1;
    if(l < n && a[l] > a[max]) 
        max = l; 
    if(r < n && a[r] > a[max])
        max = r;
    if(max != i)
	{
        Swap(a[i], a[max]);
        heapify(a ,n , max);
    }
    
}

void Heap_Sort(int a[], int n) 
{
    for (int i = n / 2 - 1; i >= 0; i--)
    	heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--)
	{
 		Swap(a[0], a[i]);
 		heapify(a, i, 0);
    }
}