#include <stdio.h>

// Bài 1: Cho mảng 2 chiều A, là ma trẬN gồm n hàng và m cột được nhập từ bàn phìm. Viết chương trình:
// 1. Xuất mảng A ra ma trận dưới dạng bảng.
// 2. Tính tổng tất cả các phần tử dương của ma trận
// 3. Tính tổng các phần tử chia hết cho 5 trong ma trận
// 4. Kiểm tra xem trong ma trận có tồn tại các số nguyên lẻ lớn hơn 10 không ?
// 5. Đếm các phần tử chẵn trong ma trận
// 6. Sắp xếp các phần tử trên một hàng (hàng 2) tăng dần từ trái sang phải. 
int main()
{
    int i, j, so_hang, so_cot;
    int A[50][50];
    do
    {
        printf("Nhap vao so hang (0<n<50): "); scanf("%d", &so_hang);
    }
    while(!(0 < so_hang && so_hang < 50));
    do
    {
        printf("Nhap vao so cot (0<n<50): "); scanf("%d", &so_cot);
    }
    while(!(0 < so_cot && so_cot < 50));
    //NHập giá trị cho các phần tử
    printf("Nhap gia tri cho cac phan tu: ");
    for (i = 0; i < so_hang; i++)
    {
        for(j = 0; j < so_cot; j++)
        {
            printf("\nA[%d][%d] = ", i, j); scanf("%d", &A[i][j]);
        }
    }
    // Xuất mảng A ra ma trận dưới dạng bảng
    printf("Ma tran vua nhap la:\n");
    for(i = 0; i < so_hang; i++)
    {
        for(j = 0; j < so_cot; j++)
        {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }

// 2. Tính tổng tất cả các phần tử dương của ma trận
    int tong_duong = 0;
    for(i= 0; i < so_hang; i++)
    {
        for(j = 0; j < so_cot; j++)
        {
            if(A[i][j] > 0)
            {
                tong_duong = tong_duong += A[i][j];
            }
        }
         
    }
    printf("\nTong tat ca cac phan tu duong cua ma tran la: %d", tong_duong);

// 3. Tính tổng các phần tử chia hết cho 5 trong ma trận
    int tong_chia5 = 0;
    for(i= 0; i < so_hang; i++)
    {
        for(j = 0; j < so_cot; j++)
        {
            if(A[i][j] % 5 == 0)
            {
                tong_chia5 += A[i][j];
            }
        }
    }
    printf("\nTong cac phan tu chia het cho 5 trong ma tran la: %d", tong_chia5);

// 4. Kiểm tra xem trong ma trận có tồn tại các số nguyên lẻ lớn hơn 10 không ?
    int kiemtra_le = 0;
    for(i= 0; i < so_hang; i++)
    {
        for(j = 0; j < so_cot; j++)
        {
            if(A[i][j] % 2 != 0 && A[i][j] > 10)
            {
                kiemtra_le = 1;
                printf("\nMa tran co ton tai so nguyen le lon hon 10");
            }
        }
    }
    if(kiemtra_le == 0)
    {
        printf("\nMa tran khong ton tai so nguyen le lon hon 10");
    }

    // 5. Đếm các phần tử chẵn trong ma trận
    int dem_so_chan = 0;
    for(i= 0; i < so_hang; i++)
    {
        for(j = 0; j < so_cot; j++)
        {
            if(A[i][j] % 2 == 0)
            {
                dem_so_chan++;
            }
        }
    }
    printf("\nSo phan tu co gia tri chan la: %d", dem_so_chan);

// 6. Sắp xếp các phần tử trên một hàng (hàng 2) tăng dần từ trái sang phải.
    int tam;
    for(i = 0; i < so_cot; i++)
    {
        for(int k = i + 1; k < so_cot; k++)
        {
            if(A[1][i] > A[1][k])
            {
                tam = A[1][i];
                A[1][i] = A[1][k];
                A[1][k] = tam;
            }
        }
    }
    printf("\nMa tran sau khi sap xep tang dan hang 2:\n");
    for(i = 0; i < so_hang; i++)
    {
        printf("%d ", A[1][i]);
    }

    return 0;
}