#include <stdio.h>

//Định nghĩa hàm tìm max
int tim_max(int a, int b, int c)
{
    int max = a;
    if(max < b) // Nếu b > max
    {
        max = b; // Thì gán max = b
    }
    if(max < c)
    {
        max = c;
    }
    return max;
}
//Định nghĩa hàm tìm min
int tim_min(int a, int b, int c)
{
    int min = a;
    if(min > b)
    {
        min = b; 
    }
    if(min > c)
    {
        min = c;
    }
    return min;
}
//Định ngĩa hàm tính tổng
int tinh_tong(int a, int b, int c)
{
    int tong;
    tong = a + b + c;
    return tong;
}

//Đây là hàm main 
int main ()
{
    int a, b, c;
    printf("Nhap vao 3 so a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("\nSo lon nhat trong 3 so vua nhap la: %d", tim_max(a, b, c));
    printf("\nSo nho nhat trong 3 so vua nhap la: %d", tim_min(a, b, c));
    printf("\nTong cua 3 so vua nhap la: %d", tinh_tong(a, b, c));
}
