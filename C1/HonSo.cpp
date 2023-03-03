#include<stdio.h>
#include<conio.h>

struct HonSo
{
    int SoNguyen, TuSo, MauSo;
};

void NhapHonSo(HonSo &hs)
{
    printf("\nXin Hay Nhap So Nguyen = ");
    scanf("%d", &hs.SoNguyen);
    
	printf("\nXin Hay Nhap Tu So = ");
    scanf("%d", &hs.TuSo);

    do
    {
        printf("\nXin Hay Nhap Mau So = ");
        scanf("%d", &hs.MauSo);

        if(hs.MauSo == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
    }while(hs.MauSo == 0);
}

void XuatHonSo(HonSo hs)
{
    printf("%d/%d", hs.SoNguyen, hs.TuSo, hs.MauSo);
}
int main()
{
    HonSo hs;
    NhapHonSo(hs);
    XuatHonSo(hs);
    getch();
    return 0;
}
