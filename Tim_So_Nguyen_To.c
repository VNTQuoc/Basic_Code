#include <stdio.h>
#include <math.h>

//Viết chương trình dưới dạng hàm nhập vào số nguyên N bất kỳ từ bàn phím.
//Kiểm tra xem N có phải là số nguyên tố hay không.
//Liệt kê các ước số của N.
void so_nguyen_to(int n)
{
    int i;
    int nguyen_to = 0;
    if(n < 2)
    {
        printf("\n%d Khong phai la so nguyen to!", n);
    }
    else
    {
        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                nguyen_to++;
            }
        }
        if(nguyen_to == 0)
        {
            printf("%d la so nguyen to", n);
        }
        else
        {
            printf("%d khong phai la so nguyen to", n);
        }
    }
}
//Liệt kê ước số
void Lietke_Uocso(int n)
{
    int dem;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            dem++;
        }
    }
    printf("\n%d gom cac uoc so la: ", n);
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            printf("%3d", i);
        }
    }
}

int main()
{
    int n;
    printf("Moi ban nhap so n: ");
    scanf("%d", &n);

    so_nguyen_to(n);
    Lietke_Uocso(n);
}