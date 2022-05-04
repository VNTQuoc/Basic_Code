#include <stdio.h>
#include <string.h>
// Võ Nguyễn Trấn Quốc K21PF-05
// Bài 6:
void Menu(void)
{
    printf("\n------------- Menu -------------");
    printf("\n1. Nhap mot chuoi a bat ky kich thuoc khoang (0, 50)");
    printf("\n2. Kiem tra xem trong chuoi a co ky tu so hay khong");
    printf("\n3. Kiem tra ky tu 'ch' xuat hien trong chuoi a may lan");
    printf("\n4. Kiem tra chuoi a co doi xung hay khong");
    printf("\n5. Chuoi a co bao nhieu tu");
    printf("\n6. Thoat");
}

//Hàm nhập liệu
void Nhaplieu(char a[])
{
    do
    {
        printf("\nNhap vao mot chuoi (0 - 50): ");
        gets(a);
    }
    while (!(strlen(a) > 0 && strlen(a) <= 50));
}

//Hàm tìm ký tự số 
void tim_ky_tu_so(char a[], int *kytuso)
{
    int i;
    *kytuso = 0;
    for(i = 0; i < strlen(a); i++)
    {   
        if(a[i] >= '0' && a[i] <= '9')
        {
            printf("\nChuoi co chua ky tu so");
            *kytuso = 1;
            break;
        }
    }
    if(*kytuso == 0)
    {
        printf("\nChuoi khong chua ky tu so");
    }
}
// Đếm ký tự xuất hiện trong chuỗi
//int demkytu

//Kiểm tra chuỗi có đối xứng không
void Kiem_tra_doi_xung(char tam[], char a[])
{
    strcpy(tam, a); 
    strrev(tam); 
    if(strcmp(a, tam) == 0)
    {
        printf("\nChuoi co tinh doi xung");
    }
    else
    {
        printf("\nChuoi khong doi xung");
    }
}

//Hàm kiểm tra chuỗi a có bao nhiêu từ 
void so_luong_tu(char a[], int dem) //Số lượng từ
{
    dem = 0; 
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] == ' ' && a[i+1] != ' ')
        {
            dem++;
        }
    }
    if(a[0] != ' ')
    {
        dem++;
    }
    printf("\nChuoi a co %d tu", dem);
}

//


int main()
{
    char a[50], tam[50];
    int kytuso, dem;
    Menu();

    //Chọn menu
    int chon;
    int chon_dung = 0; // biến đánh dấu chọn đúng (1) sai (0)
    while (1)
    {
        printf("\nMoi ban chon mot muc: ");
        scanf("%d", &chon);
        if (chon != 1 && chon != 6 && chon_dung == 0)
        {
            printf("\nCan nhap lieu truoc tien (chon muc 1)");
            continue;
        }
        chon_dung = 1;
        switch (chon)
        {
        case 1:
            Nhaplieu(a);
            break;
        case 2:
            tim_ky_tu_so(a, &kytuso);
            break;
        //case 3:


        case 4:
            Kiem_tra_doi_xung(tam, a);
            break;
        case 5:
            so_luong_tu(a, dem);
            break;
        case 6:
            printf("Ket thuc chuong trinh!");
            return 0;
 
        }
    }
    return 0;
}