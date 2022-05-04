#include <stdio.h>


int main() 
{
   float A[5];
   int i;
   float sum = 0;
   float *ptr;
   printf("\nNhap 5 phan tu: \n");
   for (i = 0; i < 5; i++) {
       printf("Nhap a[%d] = ", i + 1);
       scanf("%f", &A[i]);
   }
   ptr = A;
   for (i = 0; i < 5; i++) {
      sum = sum + *ptr;
      ptr++;
   }
   printf("Tong cac phan tu cua mang la: %.2f", sum);
   return(0);
}