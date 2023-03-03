#include<sdtio.h>
#include<conio.h>

struct DonThuc
{
    int a, n;
};

void Nhap(DonThuc &dt)
{
    printf("\nXin Hay Nhap He So A = ");
    scanf("%d", &dt.a);
    
	printf("\nXin Hay Nhap He Mu N = ");
    scanf("%d", &dt.n);


void Xuat(DonThuc dt)
{
    printf("P(x) = %d x ^ %d", dt.a, dt.n);
}
int main()
{
    DonThuc dt;
    Nhap(dt);
    Xuat(dt);
    getch();
    return 0;
}
