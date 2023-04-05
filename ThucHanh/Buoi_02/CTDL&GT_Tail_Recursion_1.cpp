// Nguon: https://freetuts.net/de-quy-tuyen-tinh-2946.html

int UCLN(int m, int n
{
	int r;
	if(m < n) 
		return UCLN(n, m);
	r = m % n;
	if(r == 0)
		return n;
  	else
	  	return UCLN(n,r);
}