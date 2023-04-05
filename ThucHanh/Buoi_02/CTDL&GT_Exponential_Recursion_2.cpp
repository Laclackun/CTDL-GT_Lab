// Nguon: https://freetuts.net/de-quy-da-tuyen-exponential-recursion-2958.html

#include<iostream>
using namespace std;

void DayNhiPhan(int i, int n, int *X)
{
    int val;
    for (val = 0; val < 2; val++)
    {
        X[i] = val;
  
        if (i == (n - 1))
        {
            int j;
            for(j = 0; j < n; j ++)
                cout<<X[j];
            cout<<"\n";
        }
        else
            DayNhiPhan(i + 1, n, X);
    }
}
 
int main()
{
    int n;
    cout<<"Xin Hay Nhap n = ";    
    cin>>n;
    int X[n];    
    cout<<"Dãy Nhi Phan Có Do Dài "<<n<<" là:\n";
    DayNhiPhan(0, n, X);
}
