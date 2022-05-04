#include <stdio.h>

//Bài 5: Viết chương trình menu

void Menu(void)
{
    printf("\n------------- Menu -------------");
    printf("\n1. Nhap N va mang N so nguyen");
    printf("\n2. Tinh tong cac phan tu");
    printf("\n3. Tim va hien thi so lon nhat");
    printf("\n4. Tim va hien thi so nho nhat");
    printf("\n5. Tim so duong chan");
    printf("\n6. Sap xep tang dan");
    printf("\n7. Thoat");
}
//Hàm nhập liệu
void Nhaplieu(int *N, int a[])
{
    do
    {
        printf("\nNhap so phan tu N = ");
        scanf("%d", N);
    } while (*N<0 || *N>50);
    printf("Nhap gia tri cho cac phan tu:\n");
    for (int i = 0; i < *N; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
// Hàm tính tổng 
int tinhTong(int N, int a[])
{
    int tong = 0;
    for (int i = 0; i < N; i++)
    {
        tong += a[i];
    }
    return tong;
}

//Tìm và in ra giá trị max
void TimMax(int N, int a[], int *max) //hoán đổi giá trị ta dùng biến con trỏ *max
{
    int i;
    *max = a[0];
    for (i = 1; i < N; i++){ //vòng lặp xét từ phần tử tiếp theo
        if (*max < a[i])
        {
            *max = a[i];
        }
    }
    printf("\nGia tri lon nhat trong mang la: %d", *max);
    printf("\nNhung phan tu co gia tri lon nhat la:");
    for (i = 0; i < N; i++)
    {
        if (*max == a[i])
        {
            printf("\na[%d] = %d", i, a[i]);
        }        
    }
}
//Tìm và in ra giá trị min
void TimMin(int N, int a[], int *min) //hoán đổi giá trị ta dùng biến con trỏ *min
{
    int i;
    *min = a[0];
    for (i = 1; i < N; i++){ //vòng lặp xét từ phần tử tiếp theo
        if (*min > a[i])
        {
            *min = a[i];
        }
    }
    printf("\nGia tri nho nhat trong mang la: %d", *min);
    printf("\nNhung phan tu co gia tri nho nhat la:");
    for (i = 0; i < N; i++)
    {
        if (*min == a[i])
        {
            printf("\na[%d] = %d", i, a[i]);
        }        
    }
}

//Tìm số dương chẵn lớn nhất
void TimsoDuongChanMax(int N, int a[], int *duongChanMax)
{
   int i;
   *duongChanMax = 0;
   
    for (i = 0; i < N; i++)
    {
        if (a[i] > 0 && a[i]% 2 == 0 && a[i] > *duongChanMax)
        {
            *duongChanMax = a[i];
        }  
    }
    if (*duongChanMax == 0)
    {
        printf("\nMang khong co so duong chan");
    }
    else
    {
        printf("\nSo duong chan lon nhat la: %d", *duongChanMax);        
    }    
}
//Sắp xếp mảng tăng dần
void SapxepTang(int N, int a[])
{
    int i, j, tam;
    for(i=0; i<N; i++)
    {
        for(j=i+1; j<N; j++)
        {
            if(a[i] > a[j])
            {//dùng thuật toán hoán vị
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
    printf("\nSau khi sap xep mang tang dan, ta duoc:\n");
    for(i=0; i<N ; i++)
    {
        printf("%3d", a[i]);
    }
}
int main()
{
    int N, a[50];
    int tong, max, min, duongChanMax;
    Menu();
    //Chọn menu
    int chon;
    int chon_dung = 0; // biến đánh dấu chọn đúng (1) sai (0)
    while (1)
    {
        printf("\nMoi ban chon mot muc: ");
        scanf("%d", &chon);
        if (chon != 1 && chon != 7 && chon_dung == 0)
        {
            printf("\nCan nhap lieu truoc tien (chon muc 1)");
            continue;
        }
        chon_dung = 1;
        switch (chon)
        {
        case 1:
            Nhaplieu(&N, a);
            break;
        case 2:
            printf("\nTong cua cac phan tu trong mang la: %d", tinhTong(N, a));
            break;
        case 3:
            TimMax(N, a, &max);
            break;
        case 4:
            TimMin(N, a, &min);
            break;
        case 5:
            TimsoDuongChanMax(N, a, &duongChanMax);
            break;
        case 6:
            SapxepTang(N, a);
            break;
        case 7:
            printf("\nKet thuc chuong trinh");
            return 0;
        }
    }
    return 0;
}
