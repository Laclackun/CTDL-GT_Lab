#include <iostream>
using namespace std;

long tinhGiaithua(int n) 
{
    if (n > 0) 
    {
        return n * tinhGiaithua(n - 1);
    } else 
    {
        return 1;
    }
}

int main() 
{
    int n;
    cout << "Xin Hay Nhap So Can Tinh = ";
    cin >> n;
    cout << "Giai thua cua " <<  n << "la: " << tinhGiaithua(n) << endl;
}
