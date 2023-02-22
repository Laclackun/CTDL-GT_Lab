#include <iostream>
using namespace std;

long TinhTong (int n)
{
	if (n <= 0)
	{
		return 0;
	} else
	{
		return TinhTong(n-1) + n;
	}
}

main ()
{
	int n;
	do
	{
		cout << "Xin Hay Nhap So Ban Muon =";
		cin >> n;
	} while(n < 1)
	cout << "Tong cac so tu 1 den "<<n<<" la = "<< TinhTong(n);
	return 0;
}
