#include <stdio.h>
#include <string.h>
#include <malloc.h>
//Quản lí sinh viên
typedef struct
{
    char hovaten[30];
    char gioitinh[10];
    float diem_python;
    float diem_c;
    float diemTB;
    char xeploai[15];
    char ketqua[15];
} SinhVien;

int nhapSoluongSV (int n)
{
    do
    {
        printf("Moi ban nhap so luong sinh vien: ");
        scanf("%d", &n);
    }while (n <= 0);
    return n;
}

void nhapThongtinSV(SinhVien SV[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap thong tin sinh vien thu %d", i+1);
        printf("\nNhap Ho va Ten: ");
        fflush(stdin);
        gets(SV[i].hovaten);

        printf("\nNhap gioi tinh: ");
        gets(SV[i].gioitinh);
        do
        {
            printf("\nDiem mon C: ");
            scanf("%f", &SV[i].diem_c);
        }while(SV[i].diem_c < 0 || SV[i].diem_c > 10);

        do
        {
            printf("\nDiem mon Python: ");
            scanf("%f", &SV[i].diem_python);
        }while(SV[i].diem_python < 0 || SV[i].diem_python > 10);
    }
}

//Hiển thị sinh viên
void hienthiSV(SinhVien SV[], int n)
{
    printf("\n----------Thong tin sinh vien----------\n");
    printf("%-20s %-15s %-15s %-15s %-15s %-15s %-15s\n", "Ho va Ten", "Gioi tinh", "Diem C", "Diem Python", "Diem trung binh", "xeploai", "Ket qua");
    for(int i = 0; i < n; i++)
    {
        printf("%-20s %-15s %-15.2f %-15.2f %-15.2f %-15s %-10s\n", SV[i].hovaten, SV[i].gioitinh, SV[i].diem_c, SV[i].diem_python, SV[i].diemTB, SV[i].xeploai, SV[i].ketqua);
    }
}

//Tính điểm TB
void TinhDTB(SinhVien SV[], int n)
{
    for(int i = 0; i < n; i++)
    {
        SV[i].diemTB = (SV[i].diem_c*2 + SV[i].diem_python) / 3;
    }
}

//Hàm xếp loại
void xeploai(SinhVien SV[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(SV[i].diemTB > 9)
        {
            strcpy(SV[i].xeploai, "Xuat sac");
        }
        else if(SV[i].diemTB > 8)
        {
            strcpy(SV[i].xeploai, "Gioi");
        }
        else if(SV[i].diemTB > 7)
        {
            strcpy(SV[i].xeploai, "Kha");
        }
        else if(SV[i].diemTB >= 5)
        {
            strcpy(SV[i].xeploai, "Trung binh");
        }
        else
        {
            strcpy(SV[i].xeploai, "Yeu");
        }
    }
}

//Kết quả
void ketqua(SinhVien SV[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(SV[i].diemTB < 5 || SV[i].diem_c == 0 || SV[i].diem_python == 0)
        {
            strcpy(SV[i].ketqua, "Khong dat");
        }
        else
        {
            strcpy(SV[i].ketqua, "Dat");
        }
    }
}
//Sắp xếp theo thứ tự tăng dần
void sapxeptangdan(SinhVien SV[], int n)
{
    SinhVien tam;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(SV[i]. diemTB > SV[j].diemTB)
            {
                tam = SV[i];
                SV[i] = SV[j];
                SV[j] = tam;
            }
        }
    }
}

// Tìm kiếm tên


int main()
{
    int n;
    char ten;
    char QuanlySV;
    SinhVien *SV;
    n = nhapSoluongSV(n);
    //Cấp phát bộ nhớ cho n SV
    SV = (SinhVien*)malloc(sizeof(SinhVien));
    
    nhapThongtinSV(SV, n);
    TinhDTB(SV, n);
    xeploai(SV, n);
    ketqua(SV, n);
    hienthiSV(SV, n);
    sapxeptangdan(SV, n);
    //timkiemten(SV, ten, n);
    //GhiSinhVien(SV, n, QuanlySV);
    free(SV);

    return 0;
}