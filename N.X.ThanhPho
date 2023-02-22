#include <iostream>
using namespace std;

struct ThanhPho 
{
  short int MaTP;
  char TenTP[30];
  float DienTich;
};

void nhap(ThanhPho &tp)
{
	cout << "Hay Nhap Ma Thanh Pho: " << endl;
	cin >> tp.MaTP;
	cout << "Hay Nhap Ten Thanh Pho: " << endl;
	cin >> tp.TenTP;
	cout << "Hay Nhap Dien Tich Thanh Pho (KM): " <<endl;
	cin >> tp.DienTich;
}

void xuat(ThanhPho tp)
{
	cout << "Vay Ma Thanh Pho La: " << tp.MaTP << endl;
	cout << "Vay Ten Thanh Pho La: " << tp.TenTP << endl;
	cout << "Tong Dien Tich Thanh Pho La: " << tp.DienTich <<" Km" << endl;
}


int main ()
{
	ThanhPho tp;
	nhap(tp);
	xuat(tp);
	return 0;
}
