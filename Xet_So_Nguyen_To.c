#include <stdio.h>
//Xét số nguyên tố
void Nhaplieu(int *N)
{
    printf("\nNhap so nguyen N = ");
    scanf("%d", N);
}
//Hàm kiểm tra số nguyên tố
void kiemtra_songuyento(int N)
{
    if(N > 1)
    {
        for(int i = 2; i <= sqrt(N); i++)
        {
            if(N % i == 0)
            {
                printf("\n%d Khong phai la so nguyen to", N);
                break;
            }
            else if(N % i != 0)
            {
                printf("\n%d la so nguyen to");
            }
        }
    }
    else
    {
        printf("\n%d Khong du dieu kien de xet so nguyen to", N);
    }
}



int main()
{
    int N;
    Nhaplieu(&N);
    kiemtra_songuyento(N);
}