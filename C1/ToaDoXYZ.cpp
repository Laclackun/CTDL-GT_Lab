#include<stdio.h>
#include<conio.h>

struct DiemToaDo
{
    float x, y, z;
};

void Nhap(DiemToaDo &td)
{
    printf("\nXin Hay Nhap Toa Do X = ");
    scanf("%d", &td.x);
    
	printf("\nXin Hay Nhap Toa Do Y = ");
    scanf("%d", &td.y);
    
    printf("\nXin Hay Nhap Toa Do z = ");
    scanf("%d", &td.y);


void Xuat(DiemToaDo td)
{
    printf("(%d,%d,%d)", td.x, td.y, td.z);
}
int main()
{
    DiemToaDo td;
    Nhap(td);
    Xuat(td);
    getch();
    return 0;
}
