#include <stdio.h>

// Nhập vào một mảng gồm N số thực(0<N<50)
// 1: Tính tổng các phần tử trong mảng
// 2: Tính tổng của phần tử đầu tiên và cuối cùng trong mảng
// 3: Tính trung bình cộng trong mảng
// 4: Tìm số lớn nhất trong mảng -> Xuất ra những mảng đó
// 5: Tìm số nhỏ nhất trong mảng -> Xuất ra những mảng đó
// 6: Nhập số nguyên k bất kì rồi tìm thành phần có giá trị bằng k.
// 7: Tìm số dương chẵn lớn nhất trong mãng
// 8: kiểm tra xem tất cả các phần tử có trong mảng đều là số dương hay không?
// 9: Sắp xếp các phaant tử trong mảng theo thứ tự tăng dần 
// 10: Sắp xếp các phần tử trong mảng theo thứ tự giảm dần

int main()
{
    float A[50];
    int i, N; // Khai báo (N là số phần tử trong mảng, i là cho hàm for)
    // Nhập số phần tử của mảng
    do
    {
        printf("Nhap so luong phan tu cua mang (0<N<50): ");
        scanf("%d", &N);
    }
    while (!(0<N && N<50)); // Nếu N không thỏa điều kiện thì yêu cầu nhập lại số phần tử.
    
// NHập giá trị cho các phần tử 
    for (i = 0; i < N; i++)
    {
        printf("Phan tu thu %d: A[%d] = ", i + 1, i);
        scanf("%f", &A[i]);
    }
//1. Tính tổng của mảng
    double tong = 0;
    for(i = 0; i < N; i++)
    {
        tong = tong + A[i];
    }
    printf("\nTong cua mang la: %g ", tong);
//2. Tính tổng của phần tử đầu và cuối
    printf("\nTong cua phan tu dau va phan tu cuoi trong mang: %g", A[0] + A[N - 1]);
//Tính trung bình cộng các phần tử
    double trung_binh_cong = 0;
    for(i = 0; i < N; i++)
    {
        trung_binh_cong = tong / N;
    }
    printf("\nTrung binh cong cua cac phan tu trong mang: %.2f", trung_binh_cong);
// Tìm số lớn nhất
    float max;
    max = A[0];
    for(i = 0; i < N; i++)
    {
      if( max < A[i] ) 
      {
        max = A[i];
      }
      }
    printf("\nPhan tu lon nhat cua mang la: %.2f", max);
    printf("\nNhung phan tu co gia tri lon nhat: " );
    for(i = 0; i < N; i++) // xuất ra những phần tử lớn nhất
    {
        if(max == A[i])
        {
            printf(" A[%d] ", i);
        }
    }   
// Tìm số nhỏ nhất 
    float min;
    min = A[0];
    for(i = 0; i < N; i++)
    {
        if(A[i] < min)
        {
            min = A[i];
        }
    }
    printf("\nPhan tu nho nhat cua mang la : %.2f", min);
    printf("\nNhung phan tu co gia tri nho nhat: ");
    for(i = 0; i < N; i++)
    {
            if(A[i] == min)
            {
                printf(" A[%d] ", i);
            }
    }
// Nhập số nguyên k -> hiển thị số = k
    int k, dem = 0;
    printf("\nNhap so nguyen k: ");
    scanf("%d", &k);
    for(i = 0; i < N; i++)
    {
        if(A[i] == k)
        {
            dem++;
        }
    }
    printf("Co %d phan tu co gia tri bang %d", dem, k);
// TÌm số nguyên dương chẵn lớn nhất trong mãng
    float soduongchan_max = 0;
    for(i = 0; i < N; i++)
    {
        if(A[i]>0 && A[i] == (int)A[i] && (int)A[i]%2 == 0 && soduongchan_max < A[i])
        {
            soduongchan_max = A[i];
        }
    }
    //printf("\nSo duong chan lon nhat trong mang la: %g", soduongchan_max);
    if(soduongchan_max == 0)
    {
        printf("\nMang khong co so duong chan");
    }
    else
    {
        printf("\nSo duong chan lon nhat trong mang la: %g", soduongchan_max);
    }
// Sắp xếp các phaant tử trong mảng theo thứ tự tăng dần 
    float tam;
    int j;
    for(i = 0; i < N; i++) //Vòng này bắt đầu từ phần tử đầu tiên
    {
        for(j = i + 1; j < N; j++)
        {
            if(A[i] > A[j]) // nếu phần tử đầu tiên lớn hơn phần tử thứ 2
            {// thì thực hiện hoán đổi vị trí A[i] và A[j]
                tam = A[i];
                A[i] = A[j];   
                A[j] = tam;     
            }
        }
    }
    printf("\nMang sau khi sap xep giam dan la:");
    for(i = 0; i < N; i++)
    {
        printf("%3g", A[i]);
    }
// Sắp xếp thứ tự phần tử giảm dần
    for(i = 0; i < N; i++) 
    {
        for(j = i + 1; j < N; j++)
        {
            if(A[i] < A[j]) 
            {
                tam = A[i];
                A[i] = A[j];   
                A[j] = tam;     
            }
        }
    }
    printf("\nMang sau khi sap xep giam dan la:");
    for(i = 0; i < N; i++)
    {
        printf("%3g", A[i]);
    }
// Kiểm tra xem tất cả các phần tử có trong mảng đều là số dương hay không?
    int kiemtra_soduong = 1;
    for (i = 0; i < N; i++)
    {
        if(A[i] <= 0)
        {
            kiemtra_soduong = 0;
            printf("\nMang khong chua so duong");
            break;
        }
    }
    if(kiemtra_soduong == 1)
    {
        printf("\nMang toan so duong");
    }

    return 0;
}